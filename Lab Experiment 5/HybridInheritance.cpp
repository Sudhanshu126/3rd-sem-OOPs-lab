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

class Rectangle : public Shape
{
    public:
    void WhatShape()
    {
        cout<<"The shape is a rectangle."<<endl;
    }
};

class RegularShape
{
    public:
    void SideInfo()
    {
        cout<<"All sides are equal."<<endl;
    }
};

class Square : public Rectangle, public RegularShape {};

int main()
{
    Square sq;
    sq.GetInfo();
    sq.WhatShape();
    sq.SideInfo();

    return 0;
}