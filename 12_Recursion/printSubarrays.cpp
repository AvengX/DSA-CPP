#include <iostream>
#include <vector>

using namespace std;

// Recursive function to print all subarrays
// start: starting index of the current subarray
// end: ending index of the current subarray
void printAllSubarrays(const vector<int>& nums, int start, int end) {
    // Base case: if end reaches the size of the array, we are done
    if (end == nums.size()) {
        return;
    }

    // If start is greater than end, it means we have finished printing
    // all subarrays ending at 'end'. We move to the next 'end' index
    // and reset 'start' to 0.
    if (start > end) {
        printAllSubarrays(nums, 0, end + 1);
    } else {
        // Print the current subarray from start to end
        cout << "[";
        for (int i = start; i <= end; ++i) {
            cout << nums[i];
            if (i < end) {
                cout << ", ";
            }
        }
        cout << "]" << endl;

        // Move to the next start index for the same end index
        printAllSubarrays(nums, start + 1, end);
    }
}

int main() {
    vector<int> nums = {1, 2, 3, 4, 5};
    cout << "All subarrays of {1, 2, 3, 4, 5}:" << endl;
    printAllSubarrays(nums, 0, 0);
    return 0;
}
