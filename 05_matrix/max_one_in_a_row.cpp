#include <bits/stdc++.h>
using namespace std;

int main() {
    int R, C;
    cin >> R >> C;

    int maxOnes = 0, maxRow = -1;

    for (int i = 0; i < R; i++) {
        int count = 0;
        for (int j = 0; j < C; j++) {
            int x;
            cin >> x;
            if (x == 1) count++;
        }
        if (count > maxOnes) {
            maxOnes = count;
            maxRow = i;
        }
    }

    cout << maxRow << endl;

    return 0;
}
