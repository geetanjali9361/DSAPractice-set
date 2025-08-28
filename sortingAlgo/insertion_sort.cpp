#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> insertionSort(vector<int>& nums) {
        int n=nums.size();
            for(int i=0; i<n; i++){
                int j=i;
                while(j>0 && nums[j]<nums[j-1]){
                        swap(nums[j],nums[j-1]);
                        j--;
                }
            }
        return nums;
    }
};


int main(){
    vector<int>nums = {7 ,4 ,1 ,5 ,3};
    Solution sol;
    vector<int>result = sol.insertionSort(nums);

    cout << "Sorted array: ";
    for(int i=0;i<result.size();i++){
        cout<<result[i]<<'\n';
    }
    return 0;
}