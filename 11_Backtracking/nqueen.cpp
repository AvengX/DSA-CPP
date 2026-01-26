#include <bits/stdc++.h>
using namespace std;

void printsolution(vector<vector<char>> &board, int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << board[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
}

bool issafe(int row, int col, vector<vector<char>> &board, int n) {
    int i = row;
    int j = col;

    // Check row on the left side
    while (j >= 0) {
        if (board[i][j] == 'Q') {
            return false;
        }
        j--;
    }

    // Check upper diagonal on left side
    i = row;
    j = col;
    while (i >= 0 && j >= 0) {
        if (board[i][j] == 'Q') {
            return false;
        }
        i--;
        j--;
    }

    // Check lower diagonal on left side
    i = row;
    j = col;
    while (i < n && j >= 0) {
        if (board[i][j] == 'Q') {
            return false;
        }
        i++;
        j--;
    }

    return true;
}

void solve(vector<vector<char>> &board, int col, int n) {
    if (col >= n) {
        printsolution(board, n);
        return;
    }

    for (int row = 0; row < n; row++) {
        if (issafe(row, col, board, n)) {
            board[row][col] = 'Q';
            solve(board, col + 1, n);
            board[row][col] = '-'; // Backtrack
        }
    }
}

int main() {
    int n = 4; // You can change this value
    vector<vector<char>> board(n, vector<char>(n, '-'));
    int col = 0;
    solve(board, col, n);

    return 0;
}