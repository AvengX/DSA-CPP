// //row wise printing of matrix
// #include <iostream>
// using namespace std;
// int main()
// {
//     int arr[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
//     for (int i = 0; i < 3; i++)
//     {
//         for (int j = 0; j < 3; j++)
//         {
//             cout << arr[i][j] << " ";
//         }
//         cout << endl;
//     }
// }
// //colmn wise printing of matrix
// #include <iostream>
// using namespace std;
// int main()
// {
//     int arr[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
//     for (int i = 0; i < 3; i++)
//     {
//         for (int j = 0; j < 3; j++)
//         {
//             cout << arr[j][i] << " ";
//         }
//         cout << endl;
//     }
// }
//   //Row wise printing
// #include <iostream>
// using namespace std;
// int main()
// {
//     int array[3][4];
//     int row = 3;
//     int col = 4;
//     cout << "Enter the number:"<<endl;
//     for (int i = 0; i < row; i++)
//     {
//         for (int j = 0; j < col; j++)
//         {
//             cin>>array[i][j];
//         }
//         cout << endl;
//     }
//     cout << "Printing row wise:"<<endl;
//     for (int i = 0; i < row; i++)
//     {
//         for (int j = 0; j < col; j++)
//         {
//             cout << array[i][j] << "   ";
//         }
//         cout << endl;
//     }
// }


//column wise printing
#include <iostream>
using namespace std;
int main()
{
    int array[3][4];
    int row = 3;
    int col = 4;
    cout << "Enter the number:"<<endl;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cin>>array[j][i];
        }
        cout << endl;
    }
    cout << "Printing row wise:"<<endl;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << array[i][j] << "   ";
        }
        cout << endl;
    }
}