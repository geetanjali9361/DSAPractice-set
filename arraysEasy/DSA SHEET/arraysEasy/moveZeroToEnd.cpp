#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    void moveZeroes(vector<int> &nums){
        int count=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0){
                count++;
                nums.erase(nums.begin()+i);
                i--;
            }
        }
        cout<<"count is: "<<count<<'\n';
        while(count>0){
            nums.push_back(0);
            count--;
        }
        for(int i=0;i<nums.size();i++){
            cout<<nums[i]<<'\n';
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
    sol.moveZeroes(nums);
    return 0;
}

