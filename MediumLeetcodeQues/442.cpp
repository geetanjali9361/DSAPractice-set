class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        unordered_map<int,int>map;
        vector<int>result;
        for(int i:nums){
            map[i]++;
        }
        for(auto &p:map){
            if(p.second >=2){
                result.push_back(p.first);
            }
        }
        return result;
    }
};