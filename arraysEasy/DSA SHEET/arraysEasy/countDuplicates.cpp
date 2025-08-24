#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int unique=0;
        for(int i=0;i<nums.size()-1;i++){
            if(nums[i]!=nums[i+1]){
                unique++;
                nums[unique]=nums[i];
            }
        }
        return unique+1;
    }
};

int main(){
    int n;
    cin>>n;
    vector<int>nums;
    for(int i=0;i<n;i++){
        int temp;
        cin>>temp;
        nums.push_back(temp);
    }
    Solution sol;
    cout<<"Answer: "<<sol.removeDuplicates(nums);
    return 0;
}