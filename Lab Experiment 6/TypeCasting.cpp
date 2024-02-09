//WAP to demonstrate typecasting

#include <iostream>

using namespace std;

int main()
{
    float number, fractional;
    int whole;
    cout<<"Enter a decimal number: ";
    cin>>number;

    whole = (int)number;
    fractional = number - whole;
    cout<<"Whole number: "<<whole<<"\nFractional part: "<<fractional<<endl;
    
    return 0;
}