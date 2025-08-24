#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    int fibonacci(int n){
        if(n<=0) return 0;
        return func(0,1,n);
    }
    int func(int a,int b,int n){
        if(n==0) return a;
        cout<<a<<'\n';
        int c=a+b;
        a=b;
        b=c;
        return func(a,b,n-1);
    }
};

int main(){
    int n;
    cin>>n;
    Solution sol;
    cout<<sol.fibonacci(n);
    return 0;
}