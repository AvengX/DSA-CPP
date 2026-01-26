#include <iostream>
using namespace std;

int main()
{
    int arr[] = {1, 2, 4, 32, 76, 43, 9, 2, 45, 0, 88, 77, 45, 33, 22};
    int size = 15;

    int start = 0;
    int end = size - 1;

    while (start <= end) {
        if (start == end) {
            cout << arr[start] << " ";
        } else {
            cout << arr[start] << " ";
            cout << arr[end] << " ";
        }
        start++;
        end--;
    }

    return 0;
}
