#include <iostream>
#include<limits.h>
using namespace std;
int getmax(int arr[][3],int row,int col){
    int mini=INT_MAX;
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            if(arr[i][j]<mini)
            {
                mini=arr[i][j];
            }
        }
    }
return mini;
}
int main()
{
    int arr[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << arr[j][i] << " ";
        }
        cout << endl;
    }
int row = 3;
int col = 3;
cout<<"The maximum element in the matrix is:"<<getmax(arr,row,col)<<endl;
return 0;

  
}
