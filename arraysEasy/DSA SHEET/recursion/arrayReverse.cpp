#include<bits/stdc++.h>
using namespace std;

class Solution{
public:
    void reverse(int arr[], int n){
        func(arr,0,n-1);
        for(int i=0;i<n;i++){
            cout<<arr[i];
        }
    }
private:
    void func(int arr[],int i,int n){
        if(i>=n) return;
        swap(arr[i],arr[n]);
        func(arr,i+1,n-1);
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
    sol.reverse(arr,n);
    return 0;
}