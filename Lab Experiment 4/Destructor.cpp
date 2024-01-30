// WAP to demonstrate use of destructor

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
            cout<<"Created object with data "<<data<<endl;
        }

        ~MyClass()
        {
            cout<<"Destroyed object with data "<<data<<endl;
        }
};

int main()
{
    MyClass class1(10);
    {
        MyClass class2(20);
    }

    return 0;
}