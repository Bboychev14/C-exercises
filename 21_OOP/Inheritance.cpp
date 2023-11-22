#include <vector>
#include <iostream>
#include <memory>
#include <string>

class AbstractEmployee
{
public:
    AbstractEmployee(std::istream& is = std::cin) { is >> name_; }
    virtual int calculateSalary() const = 0;
    virtual ~AbstractEmployee() = default;
    const std::string GetName() const { return name_; }
protected:
    std::string name_;
};

class HourlyEmployee : public AbstractEmployee
{
public:
    HourlyEmployee(std::istream& is = std::cin) : AbstractEmployee(is) 
    { is >> workedHours_ >> salary_ ; }
    int calculateSalary() const override
    {
        return salary_ * workedHours_;
    }
private:
    int workedHours_ = 0;
    int salary_ = 0;
};

class SalariedEmployee : public AbstractEmployee
{
public:
    SalariedEmployee(std::istream& is = std::cin) : AbstractEmployee(is) 
    { is >> salary_; }
    int calculateSalary() const override
    {
        return salary_;
    }
private:
    int salary_ = 0;
};

class BonusSalariedEmployee : public SalariedEmployee
{
public:
    BonusSalariedEmployee(std::istream& is = std::cin) : SalariedEmployee(is) 
    { is >> bonus_; }
    int calculateSalary() const override
    {
        return SalariedEmployee::calculateSalary() + bonus_;
    }

private:
    int bonus_;
};

std::ostream& operator<<(std::ostream &Cout, AbstractEmployee*& emp)
{
    Cout << emp->GetName() << "'s Salary: " << emp->calculateSalary() << std::endl;
    return Cout;
}

int main()
{
    AbstractEmployee* p1 = new HourlyEmployee();
    AbstractEmployee* p2 = new SalariedEmployee();
    AbstractEmployee* p3 = new HourlyEmployee();
    std::vector<AbstractEmployee*> workers = {p1, p2, p3};
    std::cout << p1 << p2 << p3;

    //Test with smart pointer
    std::unique_ptr<AbstractEmployee> ptr(new HourlyEmployee());
    std::cout << ptr->GetName() << "'s Salary: "<< ptr->calculateSalary() << std::endl;
    std::shared_ptr<AbstractEmployee> ptr2(new BonusSalariedEmployee());
    std::cout << ptr2->GetName() << "'s Salary: " << ptr2->calculateSalary() << std::endl;
}