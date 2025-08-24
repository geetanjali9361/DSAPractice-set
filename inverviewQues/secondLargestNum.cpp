#include<iostream>
#include<vector>
using namespace std;

class Solutions{
    public:
    int secondLargestNum(vector<int> &nums){
        int l=nums[0];
        int sl=nums[1];
        for(int i : nums){
            if(i>l){
                sl=l;
                l=i;
            }
            else if(i!=l && i>sl){
                sl=i;
            }
        }
        return sl;
    }
};

int main(){
    int n;
    cout<<"Enter size of array: ";
    cin>>n;
    vector<int>nums;
    cout<<"Enter vector elements: ";
    for(int i=0; i<n; i++){
        int temp;
        cin>>temp;
        nums.push_back(temp);
    }
    Solutions sol;
    int result = sol.secondLargestNum(nums);
    cout<<"the second largest number is: "<<result;
    return 0;
}