#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void palindrome(string s) {
        string s1 = "";
        for (int i = s.length() - 1; i >= 0; i--) {
            s1 += s[i];  // building reversed string
        }

        if (s1 == s) {
            cout << "Yes";  // It is a palindrome
        } else {
            cout << "No";   // Not a palindrome
        }
    }
};

int main() {
    string s;
    getline(cin, s);  // Take full line input (including spaces)
    Solution sol;
    sol.palindrome(s);
    return 0;
}
