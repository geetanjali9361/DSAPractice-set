class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        int sum=0;
        int total=0;
        for(int i : nums){
            total+=i;
        }
        cout<<"total: "<<total;
        sum=n*(n+1)/2;
        return sum-total;
    }
};