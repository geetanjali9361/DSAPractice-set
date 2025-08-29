class Solution {
public:
    int maxProduct(int n) {
        string s = to_string(n);
        int l = INT_MIN;   // largest digit
        int sl = INT_MIN;  // second largest digit

        for (int i = 0; i < s.length(); i++) {
            int digit = s[i] - '0';

            if (digit > l) {
                sl = l;   // previous largest becomes second largest
                l = digit;
            } else if (digit > sl) {
                sl = digit;
            }
        }

        return l * sl;
    }
};
