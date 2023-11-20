#include <iostream>
#include <string>
#include <vector>
#include <memory>
#include <random>
#include <algorithm>

class TeamMember;
class TeamMessage;
class Team;

class TeamMessage
{
public:
    TeamMessage(const std::string& message) : message(message) {}
private:
    std::string message;
};

class Team
{
public:
    Team(const std::string& name) : name(name) {}
    
    void AddMember(std::shared_ptr<TeamMember> member);
    void RemoveMember(std::shared_ptr<TeamMember> member);
    void SendMessageToTeam(const std::string& message);
    
private:
    std::string name;
    std::vector<std::shared_ptr<TeamMember>> members;
};

class TeamMember : public std::enable_shared_from_this<TeamMember> 
{
public:
    TeamMember(const std::string& name) : name(name) {}

    void LeaveTeam();
    void SendMessage(const std::string& message);
    void ReceiveMessage(const TeamMessage& message);

    void JoinTeam(std::shared_ptr<Team> team);
    
private:
    std::string name;
    std::shared_ptr<Team> currentTeam;
    std::vector<TeamMessage> receivedMessages;
};

void Team::AddMember(std::shared_ptr<TeamMember> member)
{
    members.push_back(member);
}

void Team::RemoveMember(std::shared_ptr<TeamMember> member)
{
    members.erase(std::remove(members.begin(), members.end(), member), members.end());
}

void Team::SendMessageToTeam(const std::string& message)
{
    TeamMessage teamMessage(message);
    for (const auto& member : members)
    {
        member->ReceiveMessage(teamMessage);
    }
}

void TeamMember::LeaveTeam()
{
    if (currentTeam)
    {
        currentTeam->RemoveMember(shared_from_this());
        currentTeam.reset();
    }
}

void TeamMember::SendMessage(const std::string& message)
{
    if (currentTeam)
    {
        currentTeam->SendMessageToTeam(message);
    }
}

void TeamMember::ReceiveMessage(const TeamMessage& message)
{
    receivedMessages.push_back(message);
}

void TeamMember::JoinTeam(std::shared_ptr<Team> team)
{
    if (currentTeam)
    {
        currentTeam->RemoveMember(shared_from_this());
    }
    currentTeam = team;
    currentTeam->AddMember(shared_from_this());
}

int main()
{
    std::shared_ptr<Team> team1 = std::make_shared<Team>("Team 1");
    std::shared_ptr<TeamMember> member1 = std::make_shared<TeamMember>("Member 1");
    
    member1->JoinTeam(team1);
    member1->SendMessage("Hello, team!");
    member1->LeaveTeam();
    
    return 0;
}