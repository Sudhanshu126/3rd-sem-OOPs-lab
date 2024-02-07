// WAP to check entered number is even or odd.

#include <iostream>

using namespace std;

bool IsEven(int n)
{
    if(n%2 == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    int n;
    cout<<"Enter a number: ";
    cin>>n;

    if(IsEven(n))
    {
        cout<<"Number is even."<<endl;
    }
    else
    {
        cout<<"Number is odd"<<endl;
    }
    
    return 0;
}