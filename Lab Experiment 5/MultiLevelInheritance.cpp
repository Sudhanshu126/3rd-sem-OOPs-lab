//WAP to demonstrate multilevel inheritance

#include <iostream>

using namespace std;

class Shape
{
    public:
    void GetShape()
    {
        cout<<"It is a shape."<<endl;
    }
};

class Triangle : public Shape
{
    public:
    void WhichShape()
    {
        cout<<"The shape is a triangle."<<endl;
    }
};

class EquilateralTriangle : public Triangle
{
    public:
    void SideInfo()
    {
        cout<<"All sides are equal."<<endl;
    }
};

int main()
{
    EquilateralTriangle eq;
    eq.GetShape();
    eq.WhichShape();
    eq.SideInfo();
}