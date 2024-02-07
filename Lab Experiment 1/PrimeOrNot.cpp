// WAP to check entered number is prime or not.

#include <iostream>
#include <cmath>

using namespace std;

bool IsPrime(int n)
{
    if(n<2)
    {
        return false;
    }

    for(int i=2; i<=sqrt(n); i++)
    {
        if(n%i==0)
        {
            return false;
        }
    }
    
    return true;
}

int main()
{
    int n;
    cout<<"Enter a number: ";
    cin>>n;

    if(IsPrime(n))
    {
        cout<<"Number is prime."<<endl;
    }
    else
    {
        cout<<"Number is not prime."<<endl;
    }
    return 0;
}