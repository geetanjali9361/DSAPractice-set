class Solution {
public:
    int thirdMax(vector<int>& nums) {
        long l=LONG_MIN, sl=LONG_MIN, tl=LONG_MIN;

        for(int i=0;i<nums.size();i++){
            if (nums[i] == l || nums[i] == sl || nums[i] == tl) continue;
            if(nums[i]>l){
                tl=sl;
                sl=l;
                l=nums[i];
            }else if(nums[i]>sl){
                tl=sl;
                sl=nums[i];
            }else if(nums[i]>tl){
                tl=nums[i];
            }
        }
        return tl==LONG_MIN ? l : tl; 
    }
};