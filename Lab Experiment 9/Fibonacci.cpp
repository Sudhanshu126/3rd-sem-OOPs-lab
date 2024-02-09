//WAP to show fibonacci function invoked using pointers

#include <iostream>

using namespace std;

void Fibonacci(int n)
{
    int a=-1, b=1, c;
    while(n--)
    {
        c=a+b;
        cout<<c<<", ";
        a=b;
        b=c;
    }
}

void PrintFibonacci(void (*function)(int), int n)
{
    function(n);
}

int main()
{
    int terms;
    cout<<"Enter number of terms: ";
    cin>>terms;
    PrintFibonacci(Fibonacci, terms);
    return 0;
}