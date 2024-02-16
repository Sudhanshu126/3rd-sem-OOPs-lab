//WAP to find mean using friend function

#include <iostream>

using namespace std;

class Mean
{
    private:
    int data1, data2, data3;

    public:
    Mean(int data1, int data2, int data3)
    {
        this->data1 = data1;
        this->data2 = data2;
        this->data3 = data3; 
    }

    friend float FindMean(Mean);
};

float FindMean(Mean mean)
{
    return (mean.data1+mean.data2+mean.data3)/3.0;
}

int main()
{
    int num1, num2, num3;
    cout<<"Enter 3 numbers: ";
    cin>>num1>>num2>>num3;

    Mean num(num1, num2, num3);
    cout<<"The mean is "<<FindMean(num)<<endl;
    return 0;
}