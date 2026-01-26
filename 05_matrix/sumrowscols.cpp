#include <iostream>
using namespace std;
void sumrows(int arr[][4], int rows, int cols)
{
    for (int i = 0; i < rows; i++)
    {
        int sum = 0;
        for (int j = 0; j < cols; j++)
        {
            sum = sum + arr[i][j];
        }
        cout << sum << endl;
    }
}
void sumcols(int arr[][4], int rows, int cols)
{
    for (int j = 0; j < cols; j++)
    {
        int sum = 0;
        for (int i = 0; i < rows; i++)
        {
            sum = sum + arr[i][j];
        }
        cout << sum << endl;
    }
}
int main()
{
    int array[3][4];
    int row = 3;
    int col = 4;
    cout << "Enter the number:" << endl;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cin >> array[i][j];
        }
        cout << endl;
    }
    cout << "Printing row wise:" << endl;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << array[i][j] << "   ";
        }
        cout << endl;
    }
    cout << "Printing row wise:"<<endl;
    sumrows(array, row, col);
    cout << "Printing column wise:"<<endl;
    sumcols(array, row, col);
    return 0;
}
