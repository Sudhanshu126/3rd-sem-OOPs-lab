//WAP to demonstrate shallow copy

#include <iostream>
#include <vector>

using namespace std;

class Animals
{
    public:
    vector<string> animalList;

    Animals(vector<string> animalList)
    {
        this->animalList = animalList;
    }
};

int main()
{
    vector<string> pets = {"Cat", "Dog"};
    Animals animals(pets);

    Animals *animalsCopy = &animals;
    animalsCopy->animalList.push_back("Goat");

    cout<<"Original: ";
    for(string animal: animals.animalList)
    {
        cout<<animal<<", ";
    }
    cout<<endl;

    cout<<"Deep Copy: ";
    for(string animal: animalsCopy->animalList)
    {
        cout<<animal<<", ";
    }
    cout<<endl;
    return 0;
}