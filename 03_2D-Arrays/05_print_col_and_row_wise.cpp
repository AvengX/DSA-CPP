#include <iostream>
using namespace std;
void printRowArray(int arr[][3], int row, int col)
{

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << arr[j][i]<<" ";
        }
        cout << endl;
    }
}
void printColArray(int arr[][3], int row, int col)
{

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << arr[i][j]<<" ";
        }
        cout << endl;
    }
}
int main()
{
    int arr[3][3]{
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };
    int row = 3;
    int col = 3;
    // for (int i = 0; i < row; i++)
    // {
    //     for (int j = 0; j < col; j++)
    //     {
    //         cout<<"Enter the value for "<<i<<j<<":";
    //         cin >> arr[i][j];
    //     }
    // }
    cout<<"Print col wise\n";
    printRowArray(arr, row, col);
    cout<<"Print row wise\n";
    printColArray(arr,row,col);
}