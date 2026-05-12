#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    int row;
    int col;

    Node(int d, int r, int c) {
        data = d;
        row = r;
        col = c;
    }
};

struct Compare {
    bool operator()(Node& a, Node& b) {
        return a.data > b.data;
    }
};

vector<int> mergeKSortedArrays(vector<vector<int>>& arrays, int k) {
    vector<int> result;

    priority_queue<Node, vector<Node>, Compare> minHeap;

    for (int i = 0; i < k; i++) {
        if (arrays[i].size() > 0) {
            Node node(arrays[i][0], i, 0);
            minHeap.push(node);
        }
    }

    while (!minHeap.empty()) {
        Node top = minHeap.top();
        minHeap.pop();

        result.push_back(top.data);

        int nextCol = top.col + 1;
        if (nextCol < arrays[top.row].size()) {
            Node next(arrays[top.row][nextCol], top.row, nextCol);
            minHeap.push(next);
        }
    }

    return result;
}

int main() {
    vector<vector<int>> arrays = {
        {1, 4, 7, 10},
        {2, 5, 8, 11},
        {3, 6, 9, 12}
    };
    int k = arrays.size();

    cout << "Input arrays:" << endl;
    for (int i = 0; i < k; i++) {
        cout << "  Array " << i + 1 << ": ";
        for (int x : arrays[i]) cout << x << " ";
        cout << endl;
    }

    vector<int> result = mergeKSortedArrays(arrays, k);

    cout << "\nMerged sorted array: ";
    for (int x : result) cout << x << " ";
    cout << endl;

    return 0;
}
