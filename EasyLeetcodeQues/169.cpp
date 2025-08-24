class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int>map;
        int n=nums.size()/2;
        for(int i: nums){
            map[i]++;
        }
        for(auto &pair:map){
            if(pair.second>n){
                return pair.first;
            }
        }
        return -1;
    }
};