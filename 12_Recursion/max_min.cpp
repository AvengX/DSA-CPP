#include <iostream>
#include <limits.h>
using namespace std;
void findMax(int arr[], int n, int i, int &maxi)
{
    if (i >= n)
    {
        return;
    }
    if (arr[i] > maxi)
    {
        maxi = arr[i];
        findMax(arr, n, i + 1, maxi);
    }
}
void findMin(int arr[], int n, int i, int &mini)
{
    if (i >= n)
    {
        return;
    }
    mini = min(mini, arr[i]);
    findMin(arr, n, i + 1, mini);
}
int main()
{
    int arr[] = {10, 32, 58, 10, 48, 29, 26, 03, 81};
    int n = 9;
    int maxi = INT_MIN;
    int mini = INT_MAX;
    int i = 0;
    findMax(arr, n, i, maxi);
    findMin(arr, n, i, mini);
    cout << "Maximum number is " << maxi << endl;
    cout << "Minimum number is " << mini << endl;
    return 0;
}