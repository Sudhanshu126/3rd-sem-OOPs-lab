// WAP to check entered number is a palindrome or not.

#include <iostream>

using namespace std;

int Reverse(int num)
{
    int reverse = 0;
    
    while(num>0)
    {
        int lastDigit = num%10;
        reverse = reverse*10 + lastDigit;
        num /= 10;
    }

    return reverse;
}

int main()
{
    int n;
    cout<<"Enter a number: ";
    cin>>n;

    if(n == Reverse(n))
    {
        cout<<"Entered number is a palindrome."<<endl;
    }
    else
    {
        cout<<"Entered number is not a palindrome."<<endl;
    }

    return 0;
}