#include <bits/stdc++.h>
using namespace std;

//largest number in an array

class Solution{
    public:
    void largestNum(vector<int>&v, int n){
        int l = v[0];
        for(int i=0;i<n;i++){
            if(l<v[i]){
                l = v[i];
            }
        }
        cout<<"The latgest element in the array is: "<<l;
    }
};

int main(){
    int n;
    cout<<"Enter the size of vector: ";
    cin>>n;
    vector<int>v(n);
    cout<<"Enter array: ";
    for(int i=0; i<n; i++){
        cin>>v[i];
    }
    Solution sol;
    sol.largestNum(v,n);
    return 0;
}