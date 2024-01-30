//WAP to find mean using friend function

#include <iostream>

using namespace std;

class Mean
{
    private:
    int *data;

    public:
    Mean(int data[])
    {
        this->data = data;
    }
    
    friend float FindMean(Mean, int);
};

float FindMean(Mean meanClass, int size)
{
    float sum = 0;
    for(int i=0; i<size; i++)
    {
        sum+=meanClass.data[i];
    }

    return sum/size;
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

    Mean mean(arr);

    cout<<"The mean is "<<FindMean(mean, size);
    return 0;
}