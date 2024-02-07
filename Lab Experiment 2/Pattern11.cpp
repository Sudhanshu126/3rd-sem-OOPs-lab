#include <iostream>

using namespace std;

int main()
{
    int size;
    cout<<"Enter pattern size: ";
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
        i<size ? k++ : k--;
        cout<<endl;
    }

    return 0;
}