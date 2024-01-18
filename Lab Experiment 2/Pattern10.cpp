#include <iostream>

using namespace std;

int main()
{
    int size;
    cout<<"Enter pattern size: ";
    cin>>size;

    for(int i=1; i<=size; i++)
    {
        int x = 1;
        for(int j=1; j<=i; j++)
        {
            cout<<2*x;
            x++;
        }
        cout<<endl;
    }

    return 0;
}