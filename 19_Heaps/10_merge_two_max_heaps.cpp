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

/*
Complexity Analysis:
Let N be the size of heap1 and M be the size of heap2.

1. Time Complexity: O(N + M)
   - Copying elements of heap1 and heap2 into the merged vector takes O(N + M) time.
   - Building the heap using the bottom-up heapify approach on an array of size (N + M) takes O(N + M) linear time.
   - Total Time Complexity: O(N + M).

2. Space Complexity: O(N + M)
   - We allocate a new vector `merged` of size (N + M) to store the combined heap elements.
   - The recursive call stack for `heapify` takes O(log(N + M)) auxiliary space in the worst case.
   - Total Space Complexity: O(N + M).
*/  


/*
#include <bits/stdc++.h>
using namespace std;
vector<int> mergeHeaps(vector<int>& a, vector<int>& b,
                       int n, int m)
{
    priority_queue<int> maxHeap;
    for (int i = 0; i < n; i++) {
        maxHeap.push(a[i]);
    }
    for (int i = 0; i < m; i++) {
        maxHeap.push(b[i]);
    }

    vector<int> merged;
    while (!maxHeap.empty()) {
        merged.push_back(maxHeap.top());
        maxHeap.pop();
    }
    return merged;
}

int main()
{
    vector<int> a = { 10, 5, 6, 2 };
    vector<int> b = { 12, 7, 9 };
    int n = a.size(), m = b.size();

    vector<int> merged = mergeHeaps(a, b, n, m);

    for (int i = 0; i < n + m; i++)
        cout << merged[i] << " ";
    return 0;
}

Time Complexity: O((N + M)*log(N + M)), where N is the size of a[] and M is the size of b[].
Auxiliary Space: O(N + M), which is the size of the resultant merged binary max heap
*/