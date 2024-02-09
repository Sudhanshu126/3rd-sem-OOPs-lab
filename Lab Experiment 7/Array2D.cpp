//WAP to find row wise sum of 2-D array

#include <iostream>

using namespace std;

int main()
{
    int arr[100][100], rows, columns;
    cout<<"Enter number of rows and columns: ";
    cin>>rows>>columns;

    cout<<"Enter numbers:"<<endl;
    for(int i=0; i<rows; i++)
    {
        for(int j=0; j<columns; j++)
        {
            cin>>arr[i][j];
        }
    }

    for(int i=0; i<rows; i++)
    {
        int sum = 0;
        for(int j=0; j<columns; j++)
        {
            sum += arr[i][j];
        }
        cout<<"The sum of row number "<<i+1<<" is: "<<sum<<endl;
    }

    return 0;
}