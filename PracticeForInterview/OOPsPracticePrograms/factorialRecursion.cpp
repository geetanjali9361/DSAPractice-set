#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    int factorial(int n){
        return func(n,1);
    }
    int func(int n,int fact){
        if(n==1){
            cout<<"the factorial is: "<<fact;
            return 0;
        }
        fact = fact*n;
        cout<<fact<<'\n';
        return func(n-1,fact);
    }
};

int main(){
    int n;
    cin>>n;
    Solution sol;
    sol.factorial(n);
    return 0;
}