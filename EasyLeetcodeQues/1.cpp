class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int>indices;
        unordered_map<int,int>map;
        for(int i=0;i<nums.size();i++){
            int c = target-nums[i];

            //check if the number exist in the map
            if(map.find(c) != map.end()){
                return {map[c],i};
            }
            map[nums[i]]=i;
        }
        return {};
    }
};