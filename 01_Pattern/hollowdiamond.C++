#include <iostream>
using namespace std;

int main() {
    int n = 5;

    for (int row = 0; row < n; row = row + 1) {
        for (int space = 0; space < n - row - 1; space = space + 1) {
            cout << " ";
        }
        for (int col = 0; col < 2 * row + 1; col = col + 1) {
            if (col == 0 || col == 2 * row) {
                cout << "*";
            } else {
                cout << " ";
            }
        }
        cout << endl;
    }

    for (int row = 0; row < n; row = row + 1) {
        for (int space = 0; space < row; space = space + 1) {
            cout << " ";
        }
        for (int col = 0; col < 2 * n - 2 * row - 1; col = col + 1) {
            if (col == 0 || col == 2 * n - 2 * row - 2) {
                cout << "*";
            } else {
                cout << " ";
            }
        }
        cout << endl;
    }

    return 0;
}