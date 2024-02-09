//WAP to show difference between calling a virtual function and Constructor

#include <iostream>

using namespace std;

class MyClass
{
    public:
    MyClass()
    {
        cout<<"Default constructor called."<<endl;
        cout<<"Object created."<<endl;
    }
    virtual void Greet()
    {
        cout<<"Virtual function called."<<endl;
        cout<<"Hello World!"<<endl;
    }
};

int main()
{
    MyClass class1;

    class1.Greet();

    return 0;
}