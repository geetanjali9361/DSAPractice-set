#include <vector>
#include <climits>
#include <algorithm>
using namespace std;

class Solution {
public:
    int minimumSumSubarray(vector<int>& nums, int l, int r) {
        int n = nums.size();
        int minSum = INT_MAX;
        bool found = false;
        
        // Try all possible subarray lengths from l to r
        for (int len = l; len <= r; len++) {
            // Use sliding window for current length
            int windowSum = 0;
            
            // Calculate sum of first window of size 'len'
            for (int i = 0; i < len; i++) {
                windowSum += nums[i];
            }
            
            // Check if this window sum is positive and update minimum
            if (windowSum > 0) {
                minSum = min(minSum, windowSum);
                found = true;
            }
            
            // Slide the window across the array
            for (int i = len; i < n; i++) {
                // Remove the leftmost element and add the rightmost element
                windowSum = windowSum - nums[i - len] + nums[i];
                
                // Check if this window sum is positive and update minimum
                if (windowSum > 0) {
                    minSum = min(minSum, windowSum);
                    found = true;
                }
            }
        }
        
        return found ? minSum : -1;
    }
};