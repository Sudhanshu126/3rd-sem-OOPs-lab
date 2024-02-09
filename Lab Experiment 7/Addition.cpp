//WAP to print addition using function overloading

#include <iostream>

using namespace std;

int Add(int a, int b)
{
    return a+b;
}

float Add(float a, float b)
{
    return a+b;
}

int main()
{
    int i1, i2;
    cout<<"Enter two integers: ";
    cin>>i1 >> i2;
    cout<<"The sum of "<<i1<<" and "<<i2<<" is: "<<Add(i1,i2)<<endl;

    float f1, f2;
    cout<<"Enter two floats: ";
    cin>>f1 >> f2;
    cout<<"The sum of "<<f1<<" and "<<f2<<" is "<<Add(f1, f2)<<endl;

    return 0;
}