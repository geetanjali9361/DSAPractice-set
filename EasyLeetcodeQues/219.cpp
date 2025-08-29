class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_map<int,int>maps;
        for(int i=0; i<nums.size(); i++){
            if(maps.find(nums[i])!=maps.end()){
                if(i-maps[nums[i]]<=k){
                    return true;
                }
            }
            maps[nums[i]]=i;
        }
        return false;
    }
};