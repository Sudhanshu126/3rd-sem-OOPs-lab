//WAP to demonstrate top exception in c++

#include <iostream>

using namespace std;

int main()
{
    int a, b;
    cout<<"Enter two numbers: ";
    cin>>a>>b;

    try
    {
        if(b == 0)
        {
            throw logic_error("Cannot divide by zero");
        }
        float div = (float)a/b;
        cout<<"The division is: "<<div<<endl;
    }
    catch(logic_error e)
    {
        cout<<"Logic error: "<<e.what()<<endl;
    }

    return 0;
}