class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        int n=nums.size();
        vector<int>result;
        vector<bool>boolVector(n+1,false);

        for(int i:nums){
            boolVector[i]=true;
        }
        for(int i=1;i<=n;i++){
            if(!boolVector[i]){
                result.push_back(i);
            }
        }
        return result;
    }
};