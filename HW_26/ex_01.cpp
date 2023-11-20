#include "ex_03.h"

#include <iostream>
#include <memory>
#include <vector>
#include <cmath>
#include <fstream>

class Shape
{
public:
    virtual double FindParameter() const = 0;
    virtual double FindArea() const = 0;
};

class Square : public Shape, public ISerializable
{
public:
    Square(int a) : a_(a) {}

    double FindParameter() const override
    {
        return 4 * a_;
    }
    double FindArea() const override
    {
        return a_ * a_;
    }
    void Serialize(std::string filename) const override
    {
        std::ofstream tempFile(filename, std::ios::app);
        tempFile << FindParameter() << ' ' << FindArea() << std::endl;
    }
private:
    int a_ = 0;
};

class Triangle : public Shape, public ISerializable
{
public:
    Triangle(int a) : a_(a) {}

    double FindParameter() const override
    {
        return 3 * a_;
    }
    double FindArea() const override
    {
        return (sqrt(3) / 4) *(a_ * a_);
    }
    void Serialize(std::string filename) const override
    {
        std::ofstream tempFile(filename, std::ios::app);
        tempFile << FindParameter() << ' ' << FindArea() << std::endl;
    }
private:
    int a_ = 0;
};

class Circle : public Shape, public ISerializable
{
public:
    Circle(int radius) : radius_(radius) {}

    double FindParameter() const override
    {
        return 2 * 3.14 * radius_;
    }
    double FindArea() const override
    {
        return 3.14 * (radius_ * radius_);
    }
    void Serialize(std::string filename) const override
    {
        std::ofstream tempFile(filename, std::ios::app);
        tempFile << FindParameter() << ' ' << FindArea() << std::endl;
    }
private:
    int radius_ = 0;
};

class Rectangle : public Shape, public ISerializable
{
public:
    Rectangle(int a, int b) : a_(a), b_(b) {}

    double FindParameter() const override
    {
        return (2 * a_) + (2 * b_);
    }
    double FindArea() const override
    {
        return a_ * b_;
    }
    void Serialize(std::string filename) const override
    {
        std::ofstream tempFile(filename, std::ios::app);
        tempFile << FindParameter() << ' ' << FindArea() << std::endl;
    }
private:
    int a_ = 0;
    int b_ = 0;
};

template<typename T>
    void MakeDerived(std::vector<std::shared_ptr<T>>& vec)
    {
        vec.push_back(std::make_shared<Square>(5));
        vec.push_back(std::make_shared<Triangle>(7));
        vec.push_back(std::make_shared<Circle>(8));
        vec.push_back(std::make_shared<Rectangle>(9, 3));
    }

int main()
{
    std::vector<std::shared_ptr<Shape>> figures;
    std::vector<std::shared_ptr<ISerializable>> sFigures;
    MakeDerived(figures);
    for (const auto& fig : figures)
    {
        std::cout << fig->FindParameter() << ' ' << fig->FindArea() << std::endl;
    }

    MakeDerived(sFigures);
    for (const auto& sfig : sFigures)
    {
        sfig->Serialize("temp.txt");
    } 

//Below was the way I tested the program before the template
/*     std::vector<std::shared_ptr<Shape>> figures;
    std::shared_ptr<Shape> fig1 = std::make_shared<Square>(5);
    std::shared_ptr<Shape> fig2 = std::make_shared<Triangle>(7);
    std::shared_ptr<Shape> fig3 = std::make_shared<Circle>(8);
    std::shared_ptr<Shape> fig4 = std::make_shared<Rectangle>(9, 3);
    figures.push_back(fig1);
    figures.push_back(fig2);
    figures.push_back(fig3);
    figures.push_back(fig4);
    for (const auto& fig : figures)
    {
        std::cout << fig->FindParameter() << ' ' << fig->FindArea() << std::endl;
    }

    std::vector<std::shared_ptr<ISerializable>> sFigures;
    std::shared_ptr<ISerializable> sptr1 = std::make_shared<Square>(5);
    std::shared_ptr<ISerializable> sptr2 = std::make_shared<Triangle>(7);
    std::shared_ptr<ISerializable> sptr3 = std::make_shared<Circle>(8);
    std::shared_ptr<ISerializable> sptr4 = std::make_shared<Rectangle>(9, 3);
    sFigures.push_back(sptr1);
    sFigures.push_back(sptr2);
    sFigures.push_back(sptr3);
    sFigures.push_back(sptr4);

    for (const auto& sfig : sFigures)
    {
        sfig->Serialize("temp.txt");
    } */
    
}