
#include <iostream>
#include <vector>
#include <string>
#include <sstream>
#include <memory>

class ICommand
{
public:
    ICommand(double a, double b) : a_(a), b_(b) {}
    virtual double execute() = 0;
    
protected:
    double a_ = 0;
    double b_ = 0;
};

class Add : public ICommand
{
public:
    Add(double a, double b) : ICommand(a, b) {}
    double execute() override
    {
        return a_ + b_;
    }
};

class Subb : public ICommand
{
public:
    Subb(double a, double b) : ICommand(a, b) {}
    double execute() override
    {
        return a_ - b_;
    }
};

class Devide : public ICommand
{
public:
    Devide(double a, double b) : ICommand(a, b) {}
    double execute() override
    {
        return a_ / b_;
    }
};

class Multiply : public ICommand
{
public:
    Multiply(double a, double b) : ICommand(a, b) {}
    double execute() override
    {
        return a_ * b_;
    }
};

int main()
{

    std::vector<ICommand*> commands;
    std::string input;
    while (std::getline(std::cin, input))
    {
        std::istringstream iss(input);
        std::string command;
        int num1, num2;
        if (iss >> command >> num1 >> num2)
        {
            if (command == "Add")
            {
                commands.push_back(new Add(num1,num2));
            }
            else if (command == "Multiply")
            {
                commands.push_back(new Multiply(num1,num2));
            }
            else if (command == "Devide")
            {
                commands.push_back(new Devide(num1,num2));
            }
            else if (command == "Substract")
            {
                commands.push_back(new Subb(num1,num2));
            }
        }
    }
    
    for (auto& temp : commands)
    {
        std::cout << temp->execute() << std::endl;
        delete temp;
    }
    
    return 0;



/*  std::vector<std::shared_ptr<ICommand>> commands;
    std::string input;

        while (std::getline(std::cin, input))
    {
        std::istringstream iss(input);
        std::string command;
        int num1, num2;
        if (is >> command >> num1 >> num2)
        {
            if (command == "Add")
            {
                commands.push_back(std::make_shared<Add>(num1, num2))
            }
        }
    }
 */
}