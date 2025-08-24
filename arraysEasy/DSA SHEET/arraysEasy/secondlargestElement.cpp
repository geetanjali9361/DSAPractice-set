#include<bits/stdc++.h>
using namespace std;

//second largest number in the array

class Solution{
    public:
        void secondLargestElement(vector<int>nums){
            int l=nums[0];
            int sl=nums[1];
            for(int i=0;i<nums.size();i++){
                if(nums[i]>l){
                    sl=l;
                    l=nums[i];
                }
                else if(nums[i]!=l && nums[i]>sl){
                    sl=i;
                }
            }
            cout<<"second largest element: "<<sl;
        }
};

int main(){
    int n;
    cin>>n;
    cout<<'\n';
    vector<int>nums;
    for(int i=0;i<n;i++){
        int temp;
        cin>>temp;
        nums.push_back(temp);
    }
    Solution sol;
    sol.secondLargestElement(nums);
    return 0;
}