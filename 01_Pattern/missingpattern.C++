#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the number:";
    cin >> n;
    for (int row = 0; row < n; row = row + 1)
    {

        for (int col = 0; col < n; col = col + 1)
            if (row == 0 || col == 0 || row == n - 1 || col == n - 1)
            {
                cout << "* ";
            }
            else
            {
                cout << "  ";
            }
        cout << endl;
    }
}