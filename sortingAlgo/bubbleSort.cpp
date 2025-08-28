#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> bubbleSort(vector<int>& nums) {
        int n=nums.size();
        for(int i=n-1; i>=1; i--){
            for(int j=0;j<i;j++){
                if(nums[j]>nums[j+1]){
                    //swap(nums[j],nums[j+1]);
                    int temp=nums[j];
                    nums[j]=nums[j+1];
                    nums[j+1]=temp;
                }
            }
        }
        return nums;
    }
};


int main(){
    vector<int>nums = {7 ,4 ,1 ,5 ,3};
    Solution sol;
    vector<int>result = sol.bubbleSort(nums);

    cout << "Sorted array: ";
    for(int i=0;i<result.size();i++){
        cout<<result[i]<<'\n';
    }
    return 0;
}