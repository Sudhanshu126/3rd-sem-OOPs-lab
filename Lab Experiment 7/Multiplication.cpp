//WAP to print multiplication using function overloading

#include <iostream>

using namespace std;

int Multiply(int a, int b)
{
    return a*b;
}

float Multiply(float a, float b)
{
    return a*b;
}

int main()
{
    int i1, i2;
    cout<<"Enter two integers: ";
    cin>>i1 >> i2;
    cout<<"The product of "<<i1<<" and "<<i2<<" is: "<<Multiply(i1,i2)<<endl;

    float f1, f2;
    cout<<"Enter two floats: ";
    cin>>f1 >> f2;
    cout<<"The product of "<<f1<<" and "<<f2<<" is "<<Multiply(f1, f2)<<endl;

    return 0;
}