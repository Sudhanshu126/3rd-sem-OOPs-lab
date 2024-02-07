//WAP to demonstrate deep copy

#include <iostream>
using namespace std;

class MyClass
{
    private:
    int data1;
    int *data2 = new int;

    public:
    MyClass(int data1, int data2)
    {
        this->data1 = data1;
        *(this->data2) = data2;
    }
    MyClass(const MyClass &myClass)
    {
        this->data1 = myClass.data1;
        this->data2 = new int;
        *(this->data2) = *(myClass.data2);
    }
    void GetData()
    {
        cout<<"Data1: "<<data1<<endl;
        cout<<"Data2: "<<*data2<<endl<<"Address of Data2: "<<data2<<endl;
    }
};

int main()
{
    MyClass class1(10, 20);
    cout<<"Class1 data: "<<endl;
    class1.GetData();

    MyClass class2(class1);
    cout<<"Class2 data: "<<endl;
    class2.GetData();

    return 0;
}