#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    bool primeNumber(int n){
        for(int j=2;j<=sqrt(n);j++){
            if(n%j==0){
                return false;
            }
        }
        return true;
    }
};

int main(){
    int n;
    cin>>n;
    Solution sol;
    if(n<=1) return 0;
    for(int i=2;i<=n;i++){
        if(sol.primeNumber(i)){
            cout<<i<<'\n';
        }
    }
    return 0;
};