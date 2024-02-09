//WAP to print n natural number using class

#include <iostream>

using namespace std;

class Number
{
    public:
    void PrintNumber(int n)
    {
        for(int i=1; i<=n; i++)
        {
            cout<<i<<", ";
        }
    }
};

int main()
{
    Number number;
    int num;

    cout<<"Enter a number: ";
    cin>>num;
    number.PrintNumber(num);

    return 0;
}