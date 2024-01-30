//WAP to demonstrate hierarchical inheritance

#include <iostream>

using namespace std;

class Dog
{
    public:
    void WhatAnimal()
    {
        cout<<"The animal is a dog."<<endl;
    }
};

class GermanShepherd : public Dog
{
    public:
    void GetBreed()
    {
        cout<<"The dog is a German Shepherd."<<endl;
    }
};

class Husky : public Dog
{
    public:
    void GetBreed()
    {
        cout<<"The dog is a Husky."<<endl;
    }
};

int main()
{
    GermanShepherd gs;
    gs.WhatAnimal();
    gs.GetBreed();

    Husky hs;
    hs.WhatAnimal();
    hs.GetBreed();

    return 0;
}