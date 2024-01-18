#include <iostream>

using namespace std;

int main()
{
    int size;
    cout<<"Enter pattern size: ";
    cin>>size;

    for(int i=1; i<=size; i++)
    {
        char a = 'A';
        for(int j=1; j<=i; j++)
        {
            cout<<a;
            a++;
        }
        cout<<endl;
    }

    return 0;
}