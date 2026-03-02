#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cout << "Enter number of vehicles: ";
    cin >> n;

    int arr[n];
    cout << "Enter last digits of vehicles: ";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int d;
    cout << "Enter the date: ";
    cin >> d;

    int x;
    cout << "Enter the fine: ";
    cin >> x;

    int fine = 0;

    for(int i = 0; i < n; i++) {
        if(d % 2 == 0) {             
            if(arr[i] % 2 != 0) {    
                fine += x;
            }
        } else {                     
            if(arr[i] % 2 == 0) {    
                fine += x;
            }
        }
    }

    cout << "Total Fine: " << fine;
    return 0;
}
