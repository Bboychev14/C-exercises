#include <iostream>
#include <vector>
#include <random>

using namespace std;

enum class Choice
{
    Rock,
    Paper,
    Scissors
};

ostream& operator<<(ostream& os, const Choice& choice)
{
    switch (choice)
    {
        case Choice::Rock:
            os << "Rock";
            break;
        case Choice::Paper:
            os << "Paper";
            break;
        case Choice::Scissors:
            os << "Scissors";
            break;
    }
    return os;
}

Choice GetComputerChoice()
{
    static random_device rd;
    static mt19937 gen(rd());
    static uniform_int_distribution<int> distribution(0, 2);

    int choiceNum = distribution(gen);
    return static_cast<Choice>(choiceNum);
}

bool isPlayerWin(Choice playerChoice, Choice computerChoice) {
    return (playerChoice == Choice::Rock && computerChoice == Choice::Scissors) ||
           (playerChoice == Choice::Paper && computerChoice == Choice::Rock) ||
           (playerChoice == Choice::Scissors && computerChoice == Choice::Paper);
}

int main() {
    int numRounds;

    cout << "Enter number of rounds: ";
    cin >> numRounds;

    vector<Choice> playerChoices;
    vector<Choice> computerChoices;

    for (int i = 1; i <= numRounds; ++i) {
        cout << "Round " << i << ":\n";

        int playerChoiceNum;
        cout << "Enter your choice (0 for Rock, 1 for Paper, 2 for Scissors): ";
        cin >> playerChoiceNum;

        Choice playerChoice = static_cast<Choice>(playerChoiceNum);
        Choice computerChoice = GetComputerChoice();

        cout << "You chose: " << playerChoice << "\n";
        cout << "Computer chose: " << computerChoice << "\n";

        playerChoices.push_back(playerChoice);
        computerChoices.push_back(computerChoice);
    }

    int playerWins = 0;
    int computerWins = 0;
    int ties = 0;

    for (int i = 0; i < numRounds; ++i) {
        if (isPlayerWin(playerChoices[i], computerChoices[i])) {
            ++playerWins;
        } else if (playerChoices[i] == computerChoices[i]) {
            ++ties;
        } else {
            ++computerWins;
        }
    }

    cout << "\n=== Game Results ===\n";
    cout << "Player Wins: " << playerWins << "\n";
    cout << "Computer Wins: " << computerWins << "\n";
    cout << "Ties: " << ties << "\n";

    return 0;
}