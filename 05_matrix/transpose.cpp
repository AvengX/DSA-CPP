#include <iostream>
using namespace std;

void transpose(int arr[][4], int transposed[][3], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            transposed[j][i] = arr[i][j];
        }
    }
}

int main() {
    int arr[3][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12}
    };

    cout << "Original matrix:" << endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            cout << arr[i][j] << "   ";
        }
        cout << endl;
    }

    int transposed[4][3];
    transpose(arr, transposed, 3, 4);

    cout << "The transposed matrix is:" << endl;
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 3; j++) {
            cout << transposed[i][j] << "   ";
        }
        cout << endl;
    }

    return 0;
}
