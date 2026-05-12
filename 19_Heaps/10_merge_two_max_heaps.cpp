#include <bits/stdc++.h>
using namespace std;


void heapify(vector<int>&arr, int n, int i) {
    int largest = i;
    int left = 2 * i + 1;
    int right = 2 * i + 2;

    if (left < n && arr[left] > arr[largest])
        largest = left;
    if (right < n && arr[right] > arr[largest])
        largest = right;

    if (largest != i) {
        swap(arr[i], arr[largest]);
        heapify(arr, n, largest);
    }
}


vector<int> mergeTwoMaxHeaps(vector<int>&a, vector<int>&b) {
    
    vector<int> merged;
    for (int i = 0; i < a.size(); i++)
        merged.push_back(a[i]);
    for (int i = 0; i < b.size(); i++)
        merged.push_back(b[i]);

    int n = merged.size();
    for (int i = n / 2 - 1; i >= 0; i--) {
        heapify(merged, n, i);
    }
    return merged;
}

int main() {
    vector<int> heap1 = {10, 5, 6, 2};
    vector<int> heap2 = {12, 7, 9};

    cout << "Heap 1: ";
    for (int x : heap1) cout << x << " ";
    cout << endl;

    cout << "Heap 2: ";
    for (int x : heap2) cout << x << " ";
    cout << endl;

    vector<int> mergedHeap = mergeTwoMaxHeaps(heap1, heap2);

    cout << "Merged Max Heap: ";
    for (int x : mergedHeap) cout << x << " ";
    cout << endl;

    return 0;
}
