#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    void rotateArray(vector<int>& nums, int d) {
        vector<int>temp(d);
        int n=nums.size();
        //step 1: store the 1 to d nums array num in new array temp.
        for(int i=0; i<d; i++){
            temp[i]=nums[i];
        }
        //step 2: now place d to n to the start
        for(int i=d; i<n; i++){
            nums[i-d] = nums[i];
        }
        for(int i=0; i<d; i++){
            nums[n-d+i]=temp[i];
        }
        for(int i=0; i<n; i++){
            cout<<nums[i];
        }
    }
};

int main(){
    int n,d;
    cout<<"Enter array size: ";
    cin>>n;
    cout<<"Enter d place no: ";
    cin>>d;
    vector<int>nums;
    for(int i=0;i<n;i++){
        int temp;
        cin>>temp;
        nums.push_back(temp);
    }
    Solution sol;
    sol.rotateArray(nums,d);
    return 0;
}