//WAP to demonstrate hybrid inheritance

#include <iostream>

using namespace std;

class Shape
{
    public:
    void GetInfo()
    {
        cout<<"It is a shape."<<endl;
    }
};

class Circle : public Shape
{
    public:
    void WhatShape()
    {
        cout<<"The shape is a circle."<<endl;
    }
};

class Rectangle : public Shape
{
    public:
    void WhatShape()
    {
        cout<<"The shape is a rectangle."<<endl;
    }
};

class Square : public Rectangle
{
    public:
    void SideInfo()
    {
        cout<<"All sides are equal."<<endl;
    }
};

int main()
{
    Circle c;
    c.GetInfo();
    c.WhatShape();

    Square sq;
    sq.GetInfo();
    sq.WhatShape();
    sq.SideInfo();

    return 0;
}