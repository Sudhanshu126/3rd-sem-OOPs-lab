#include <iostream>

using namespace std;

int main()
{
    int size;
    cout<<"Enter size: ";
    cin>>size;
    int columns = 2*size-1;

    for(int i=1; i<=columns; i++)
    {
        static int k = 0;
        for(int j=1; j<=columns; j++)
        {
            if(j>=size-k && j<=size+k)
            {
                cout<<"*";
            }
            else
            {
                cout<<" ";
            }
        }
        if(i<size)
        {
            k++;
        }
        else
        {
            k--;
        }
        cout<<endl;
    }

    return 0;
}