#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    void rotateArrayByOne(vector<int>& nums) {
        int n=nums.size();
        int temp = nums[0];
        for(int i=0;i<n;i++){
            if(i!=n-1){
                nums[i]=nums[i+1];
            }else{
                nums[i]=temp;
            }
        }
        for(int i=0;i<nums.size();i++){
            cout<<nums[i]<<" ";
        }
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
    sol.rotateArrayByOne(nums);
    return 0;
}