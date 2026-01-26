#include<bits/stdc++.h>
using namespace std;

int main()
{
    int arr[] = {1, 2, 4, 32, 76, 43, 9, 2, 45, 0, 88, 77, 45, 33, 22};
    int size = sizeof(arr)/sizeof(int);
    int maxi = INT_MIN;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] > maxi)
        {
            maxi = arr[i];
        }
    }
    cout << "Maximum number:" << maxi << endl;
    return 0;
}