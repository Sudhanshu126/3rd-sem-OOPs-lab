//WAP to find maximum using friend function

#include <iostream>

using namespace std;

class Maximum
{
    private:
    int *data;

    public:
    Maximum(int data[])
    {
        this->data = data; 
    }

    friend int FindMaximum(Maximum, int);
};

int FindMaximum(Maximum maximum, int size)
{
    int max = maximum.data[0];

    for(int i=0; i<size; i++)
    {
        if(maximum.data[i]>max)
        {
            max = maximum.data[i];
        }
    }
    return max;
}

int main()
{
    int size, arr[100];
    cout<<"Enter array size: ";
    cin>>size;
    cout<<"Enter "<<size<<" numbers: ";
    for(int i=0; i<size; i++)
    {
        cin>>arr[i];
    }

    Maximum num(arr);
    cout<<"The maximum number is "<<FindMaximum(num, size)<<endl;
    return 0;
}