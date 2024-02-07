// WAP to print the factorial of a number.

#include <iostream>

using namespace std;

long int Factorial(int n)
{
    long int factorial = 1;

    for(int i=n; i>1; i--)
    {
        factorial *= i;
    }

    return factorial;
}

int main()
{
    int n;
    cout<<"Enter a number: ";
    cin>>n;

    cout<<"The factorial is: "<<Factorial(n)<<endl;
    
    return 0;
}