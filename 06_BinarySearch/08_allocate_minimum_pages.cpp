#include <bits/stdc++.h>
using namespace std;
bool isValid(vector<int> &arr, int n, int m, int maxAllowedPages) {
    int students = 1;
    int pages = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] > maxAllowedPages)
            return false;
        if (pages + arr[i] <= maxAllowedPages) {
            pages += arr[i];
        } else {
            students++;
            pages = arr[i];
        }
    }
    return students>m?false:true;
}
int allocateBooks(vector<int> &arr, int n, int m) {
    if (m > n)
        return -1;
    int sum = 0;
    int maxBook = 0;
    for (int i = 0; i < n; i++) {
        sum += arr[i];
        maxBook = max(maxBook, arr[i]);
    }
    int st = maxBook;   
    int end = sum;      
    int ans = -1;
    while (st <= end) {
        int mid = st + (end - st) / 2;
        if (isValid(arr, n, m, mid)) {
            ans = mid;        
            end = mid - 1;   
        } else {
            st = mid + 1;  
        }
    }
    return ans;
}
int main() {
    vector<int> books = {12, 34, 67, 90};
    int students = 2;
    int result = allocateBooks(books, books.size(), students);
    cout << "Minimum pages: " << result << endl;
    return 0;
}