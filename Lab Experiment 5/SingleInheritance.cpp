//WAP to demonstrate single inheritance

#include <iostream>

using namespace std;

class Bird
{
    public:
    virtual void Fly()
    {
        cout<<"Bird is flying."<<endl;
    }
};

class Duck : public Bird
{
    public:
    void Fly()
    {
        cout<<"Duck is flying."<<endl;
    }
};

int main()
{
    Bird bird;
    bird.Fly();

    Duck duck;
    duck.Fly();

    return 0;
}