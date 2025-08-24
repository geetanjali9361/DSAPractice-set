#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    int arrayPalindrone(int arr[], int n){
        if(n==1){
            cout<<"The array is same if reversed";
            return 0;
        }
        return func(0,n-1,arr);
    }
    int func(int i, int n, int arr[]){
        if(i>=n){
            cout<<"Yes the array is samee if reversed";
            return 0;
        }
        if(arr[i]!=arr[n]){
            cout<<"No the array is not same if reversed";
            return 0;
        }
        return func(i+1,n-1,arr);
    }
};

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    Solution sol;
    sol.arrayPalindrone(arr,n);
    return 0;
}