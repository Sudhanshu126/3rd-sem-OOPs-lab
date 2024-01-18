//WAP to illustrate function overloading

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
    cout<<Add(4,5)<<endl;
    cout<<Add(1.7f, 3.14f)<<endl;

    return 0;
}