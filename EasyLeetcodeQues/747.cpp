class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        int l=INT_MIN;
        int index;
        for(int i=0; i<nums.size();i++){
            if(nums[i]>l){
                l=nums[i];
                index=i;
            }
        }
        for(int i:nums){
            if(l<i+i && i!=l){
               return -1; 
            }
        }
        return index;
    }
};