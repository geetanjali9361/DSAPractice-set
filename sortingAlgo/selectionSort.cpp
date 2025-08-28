#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> selectionSort(vector<int>& nums) {
        int n=nums.size();
        for(int i=0; i<n-1; i++){
            int min=i;
            for(int j=i ;j<=n-1 ;j++){
                if(nums[j]<nums[min]){
                    min=j;
                }
            }
            if(min!=i){
                swap(nums[i],nums[min]);
            }
        }
        return nums;
    }
};

int main(){
    vector<int>nums = {12,5,66,22,6};
    Solution sol;
    vector<int>result = sol.selectionSort(nums);

    cout << "Sorted array: ";
    for(int i=0;i<result.size();i++){
        cout<<result[i]<<'\n';
    }
    return 0;
}