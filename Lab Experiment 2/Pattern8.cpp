#include <iostream>

using namespace std;

int main()
{
    int size;
    cout<<"Enter pattern size: ";
    cin>>size;
    int columns = 2*size-1;

    for(int i=1; i<=size; i++)
    {
        for(int j=1; j<=columns; j++)
        {
            if(j>=i && j<=columns-i+1)
            {
                cout<<"*";
            }
            else
            {
                cout<<" ";
            }
        }
        cout<<endl;
    }

    return 0;
}