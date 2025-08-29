class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_map<int,int>window;
        for(int i=0; i<nums.size(); i++){
            if(window.find(nums[i])!=window.end()){
                if(i-window[nums[i]]<=k){
                    return true;
                }
            }
            window[nums[i]]=i;

            if(window.size()>k){
                window.erase(nums[i-k])
            }
        }
        return false;
    }
};