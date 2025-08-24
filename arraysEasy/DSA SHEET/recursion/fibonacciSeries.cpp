//printing n number of fibonacci series
//time complexity- O(n)
//space complexity= O(n)

#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
     void fibonacci(int n){
        int arr[n]={0,1};
        int a=0,b=1,i=2;
        while(i<=n){
            int c=a+b;
            arr[i]=c;
            i++;
            a=b;
            b=c;
        }
        for(int i=0;i<n;i++){
            cout<<arr[i]<<" ";
        }
     }
};

int main(){
    int n;
    cin>>n;
    Solution sol;
    sol.fibonacci(n);
    return 0;
}