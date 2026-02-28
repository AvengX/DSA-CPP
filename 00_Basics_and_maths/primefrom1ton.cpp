#include <iostream>
using namespace std;

bool prime(int n) {
    if (n <= 1) {
        return false;
    }
    if (n == 2) {
        return true;
    }
    for (int i = 2; i< n; i++) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int n;
    cout << "Enter the number: ";
    cin >> n;

    cout << "Prime numbers from 1 to " << n << " are: ";
    for (int i = 2; i <= n; i++) {
        bool ans=prime(i);
        if (prime(i)) {
            cout << i << " ";
        }
    }

    return 0;
}