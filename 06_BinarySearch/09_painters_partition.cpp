#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// Function to check if painting is possible within maxAllowedTime
bool isValid(vector<int>& arr, int painters, int maxAllowedTime) {
    int requiredPainters = 1;
    int currentTime = 0;

    for (int i = 0; i < arr.size(); i++) {

        // If a single board takes more time than allowed
        if (arr[i] > maxAllowedTime) {
            return false;
        }

        // Add board to current painter if possible
        if (currentTime + arr[i] <= maxAllowedTime) {
            currentTime += arr[i];
        } 
        else {
            // Assign new painter
            requiredPainters++;
            currentTime = arr[i];
        }
    }

    return (requiredPainters <= painters);
}

// Function to find minimum time required
int minTime(vector<int>& arr, int k) {
    int n = arr.size();

    int maxVal = arr[0];
    int totalSum = arr[0];

    // Find max element and total sum
    for (int i = 1; i < n; i++) {
        maxVal = max(maxVal, arr[i]);
        totalSum += arr[i];
    }

    int low = maxVal;
    int high = totalSum;
    int result = -1;

    // Binary Search
    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (isValid(arr, k, mid)) {
            result = mid;   
            high = mid - 1;  // Try smaller time
        } 
        else {
            low = mid + 1;   // Increase time
        }
    }

    return result;
}

// Main function (for VS Code execution)
int main() {
    vector<int> boards = {10, 20, 30, 40};
    int painters = 2;

    cout << "Minimum time required: " << minTime(boards, painters) << endl;

    return 0;
}