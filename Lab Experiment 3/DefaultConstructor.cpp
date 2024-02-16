// WAP to illustrate default constructor

#include <iostream>

using namespace std;

class MyClass
{
    public:
        MyClass()
        {
            cout<<"Default constructor invoked."<<endl;
        }
};

int main()
{
    MyClass myClass;

    return 0;
}