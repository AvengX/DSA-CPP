#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<vector<int>> arr = {
        {1, 2, 3},
        {4, 5, 6}
    };

    int row = arr.size();
    int col = arr[0].size();

    vector<vector<int>> transpose(col, vector<int>(row));

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            transpose[j][i] = arr[i][j];
        }
    }

    cout << "Transpose matrix:\n";
    for (int i = 0; i < col; i++)
    {
        for (int j = 0; j < row; j++)
        {
            cout << transpose[i][j] << " ";
        }
        cout << endl;
    }
}
