//WAP to demonstrate multiple inheritance

#include <iostream>

using namespace std;

class LandAnimal
{
    public:
    string name;
    
    void Walk()
    {
        cout<<name<<" is walking."<<endl;
    }
};

class AquaticAnimal
{
    private:
    string name;

    public:
    AquaticAnimal(string name)
    {
        this->name = name;
    }

    void Swim()
    {
        cout<<name<<" is swimming."<<endl;
    }
};

class Frog : public LandAnimal, public AquaticAnimal
{
    public:
    Frog(string name) : AquaticAnimal(name)
    {
        this->LandAnimal::name = name;
    }
};

int main()
{
    Frog frog("frog");

    frog.Walk();
    frog.Swim();

    return 0;
}