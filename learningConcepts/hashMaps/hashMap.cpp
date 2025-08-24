#include<bits/stdc++.h>
#include<unordered_map>
using namespace std;

class Solutions{
    public:
    vector<int> twoSum(vector<int> &nums, int target){
        //we have to find key value pair that return 9
        //{2,7,5,9}
        //9-2=7; 9-5=4
        unordered_map<int,int>map;
        for(int i=0;i<nums.size();i++){
            int n = target-nums[i];
            if(map.find(n) != map.end()){
                return {map[n],i};  //7 at index 1, i=0
            }
            map[nums[i]]=i; //2 at 0 , {2,0}
        }
        return{};
    }
};

int main(){
    int target;
    cout<<"Enter target number: ";
    cin>>target;
    int n;
    cout<<"Enter size: ";
    cin>>n;
    vector<int>nums;
    cout<<"Enter array elements: ";
    for(int i=0;i<n;i++){
        int temp;
        cin>>temp;
        nums.push_back(temp);
    }
    Solutions sol;
    vector<int>result = sol.twoSum(nums,target);
        if (!result.empty()) {
        cout << "Indices found: " << result[0] << " and " << result[1] << endl;
    } else {
        cout << "No two numbers found that add up to the target." << endl;
    }
    return 0;
}
