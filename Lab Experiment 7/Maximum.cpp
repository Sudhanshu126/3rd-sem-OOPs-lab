//WAP to find maximum using friend function

#include <iostream>

using namespace std;

class Maximum
{
    private:
    int data1, data2, data3;

    public:
    Maximum(int data1, int data2, int data3)
    {
        this->data1 = data1;
        this->data2 = data2;
        this->data3 = data3; 
    }

    friend int FindMaximum(Maximum);
};

int FindMaximum(Maximum max)
{
    return (max.data1>max.data2) ? (max.data1>max.data3 ? max.data1 : max.data3) : (max.data2>max.data3?max.data2:max.data3);
}

int main()
{
    int num1, num2, num3;
    cout<<"Enter 3 numbers: ";
    cin>>num1>>num2>>num3;

    Maximum num(num1, num2, num3);
    cout<<"The maximum number is "<<FindMaximum(num)<<endl;
    return 0;
}