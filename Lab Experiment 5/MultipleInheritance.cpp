//WAP to demonstrate multiple inheritance

#include <iostream>

using namespace std;

class LandAnimal
{
    public:
    void Walk()
    {
        cout<<"Animal is walking."<<endl;
    }
};

class AquaticAnimal
{
    public:
    void Swim()
    {
        cout<<"Animal is swimming."<<endl;
    }
};

class Frog : public LandAnimal, public AquaticAnimal{};

int main()
{
    Frog frog;

    frog.Walk();
    frog.Swim();

    return 0;
}