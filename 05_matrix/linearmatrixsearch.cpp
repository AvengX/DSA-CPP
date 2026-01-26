#include <iostream>
using namespace std;
bool findkey(int arr[][3],int row,int col,int key){
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            if(arr[i][j]==key)
            return true;
        }
    }
    return false;
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

    if(findkey(arr,3,3,9)){
        cout<<"Element found";
    }else{
        cout<<"Element noyt found";
    }
    return 0;
}
