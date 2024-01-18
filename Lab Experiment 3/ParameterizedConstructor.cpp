// WAP to illustrate parameterized constructor

#include <iostream>

using namespace std;

class MyClass
{
    private:
        int data;
    
    public:
        MyClass(int data)
        {
            this->data = data;
        }

        void GetData()
        {
            cout<<"Data is "<<data<<endl;
        }
};

int main()
{
    MyClass myClass(10);

    myClass.GetData();

    return 0;
}