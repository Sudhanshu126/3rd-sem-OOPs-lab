//WAP to demonstrate single inheritance

#include <iostream>

using namespace std;

class Bird
{
    private:
    string name;

    public:
    Bird(string name)
    {
        this->name = name;
    }

    void Fly()
    {
        cout<<name<<" is flying."<<endl;
    }
};

class Duck : public Bird
{
    private:
    string name;
    
    public:
    Duck(string name) : Bird(name)
    {
        this->name = name;
    }
};

int main()
{
    Duck duck("Duck");

    duck.Fly();

    return 0;
}