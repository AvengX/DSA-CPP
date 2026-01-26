#include <iostream>
#include <vector>
using namespace std;

// Function to find first occurrence
int firstOccurrence(const vector<int>& arr, int target) {
    int s = 0, e = arr.size() - 1, ans = -1;
    while (s <= e) {
        int mid = s + (e - s) / 2;
        if (arr[mid] == target) {
            ans = mid;
            e = mid - 1;
        } else if (arr[mid] < target) {
            s = mid + 1;
        } else {
            e = mid - 1;
        }
    }
    return ans;
}

// Function to find last occurrence
int lastOccurrence(const vector<int>& arr, int target) {
    int s = 0, e = arr.size() - 1, ans = -1;
    while (s <= e) {
        int mid = s + (e - s) / 2;
        if (arr[mid] == target) {
            ans = mid;
            s = mid + 1;
        } else if (arr[mid] < target) {
            s = mid + 1;
        } else {
            e = mid - 1;
        }
    }
    return ans;
}

int main() {
    vector<int> v{1, 3, 4, 4, 4, 4, 6, 7};
    int target = 4;

    int first = firstOccurrence(v, target);
    int last = lastOccurrence(v, target);

    if (first == -1) {
        cout << "Target not found" << endl;
    } else {
        int total = last - first + 1;
        cout << "Total occurrences of " << target << ": " << total << endl;
    }

    return 0;
}
