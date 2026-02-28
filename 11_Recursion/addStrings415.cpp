#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void addRE(string &num1, int p1, string &num2, int p2, int carry, string &ans) {
        // Base Case
        if (p1 < 0 && p2 < 0) {
            if (carry > 0) {
                ans.push_back(carry + '0');
            }
            return;
        }

        int n1 = (p1 >= 0 ? num1[p1] : '0') - '0';
        int n2 = (p2 >= 0 ? num2[p2] : '0') - '0';

        int csum = n1 + n2 + carry;
        int digit = csum % 10;
        int newcarry = csum / 10;

        ans.push_back(digit + '0');

        addRE(num1, p1 - 1, num2, p2 - 1, newcarry, ans);
    }

    string addStrings(string num1, string num2) {
        string ans = "";
        addRE(num1, num1.size() - 1, num2, num2.size() - 1, 0, ans);
        reverse(ans.begin(), ans.end());
        return ans;
    }
};

int main() {
    Solution sol;

    string num1, num2;
    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter second number: ";
    cin >> num2;

    string result = sol.addStrings(num1, num2);

    cout << "Sum = " << result << endl;

    return 0;
}
