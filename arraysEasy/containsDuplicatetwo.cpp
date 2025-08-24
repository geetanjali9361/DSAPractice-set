#include<iostream>
#include<unordered_map>
#include<vector>
using namespace std;

class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_map<int,int>map;
        for(int i=0; i<nums.size();i++){
            if(map.find(nums[i])!=map.end()){
                if(i-map[nums[i]]<=k){
                    return true;
                }
            }
            map[nums[i]]=i;
        }
      return false;  
    }
};

int main(){
 int n,k;
 cout<<"enter size of vector: ";
 cin>>n;
 cout<<"enter difference: ";
 cin>>k;
 cout<<"Enter array elements: ";
 vector<int>nums;
 for(int i=0; i<n; i++){
    int temp;
    cin>>temp;
    nums.push_back(temp);
 }
 Solution sol;
 if(sol.containsNearbyDuplicate(nums,k)){
    cout<<"true";
 }else{
    cout<<"false";
 }
 return 0;
}

