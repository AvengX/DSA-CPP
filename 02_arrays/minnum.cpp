#include <iostream>
#include <limits.h>
using namespace std;

int main()
{
    int arr[] = {1, 2, 4, 32, 76, 43, 9, 2, 45, 56, 88, 77, 45, 33, 22};
    int size = 15;
    int mini = INT_MAX;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] < maxi)
        {
            mini = arr[i];
        }
    }
    cout << "Maximum number:" << mini << endl;
    return 0;
}