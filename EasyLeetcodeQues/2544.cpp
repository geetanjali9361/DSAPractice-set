class Solution {
public:
    int alternateDigitSum(int n) {
       string s = to_string(n); // convert number to string
        int sum = 0;
        
        for(int i = 0; i < s.size(); i++) {
            int digit = s[i] - '0'; // convert char to int
            
            if(i % 2 == 0) 
                sum += digit;   // even index -> positive
            else 
                sum -= digit;   // odd index -> negative
        }
        
        return sum; 
    }
};