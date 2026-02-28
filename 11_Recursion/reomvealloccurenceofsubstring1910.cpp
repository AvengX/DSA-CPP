#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void removeOccurrence(string &s, const string &part) {
        int found = s.find(part);

        if (found != string::npos) {
            string left_part = s.substr(0, found);
            string right_part = s.substr(found + part.size());
            s = left_part + right_part;
            removeOccurrence(s, part); // recursive call
        } 
        else {
            return;
        }
    }

    string removeOccurrences(string s, string part) {
        removeOccurrence(s, part);
        return s;
    }
};

int main() {
    Solution sol;

    string s, part;
    cout << "Enter string: ";
    cin >> s;

    cout << "Enter part to remove: ";
    cin >> part;

    string ans = sol.removeOccurrences(s, part);
    cout << "Result: " << ans << endl;

    return 0;
}
