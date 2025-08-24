#include<iostream>
#include<unordered_map>
#include<vector>
using namespace std;

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int, int> map;
        for(int i : nums) { 
            map[i]++; 
            }
        for (auto pair: map) {
            if (pair.second >= 2) {
                return true;
            }
        }
        return false;
    }
};

int main(){
    int n;
    cin>>n;
    vector<int>nums;
    cout<<"enter elements: ";
    for(int i=0;i<n;i++){
        int temp;
        cin>>temp;
        nums.push_back(temp);
    }
    Solution sol;
    if(sol.containsDuplicate(nums)){
        cout<<"true";
    }else{
        cout<<"false";
    }
    return 0;
}