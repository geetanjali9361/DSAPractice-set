#include<iostream>
#include<vector>
#include<climits>
using namespace std;

class Solution{
    public:
    int maxSum(vector<int> &nums, int k){
        if(nums.size() < k) return 0; // Handle edge case
        
        int windowSum = 0, maxS;
        
        // Calculate sum of first window
        for(int i = 0; i < k; i++){
            windowSum += nums[i];
        }
        maxS = windowSum;
        
        // Slide the window and update maximum
        for(int i = k; i < nums.size(); i++){
            windowSum += nums[i] - nums[i-k];
            maxS = max(maxS, windowSum); // Fixed: was maxSum instead of maxS
        }
        return maxS;
    }
};

int main(){
    int n, k;
    cout << "Enter size: ";
    cin >> n;
    cout << "Enter window size: ";
    cin >> k;
    
    vector<int> nums;
    cout << "Enter vector elements: ";
    for(int i = 0; i < n; i++){
        int temp;
        cin >> temp;
        nums.push_back(temp);
    }
    
    Solution sol;
    int result = sol.maxSum(nums, k);
    cout << "Maximum sum of subarray of size " << k << " is: " << result << endl;
    
    return 0;
}