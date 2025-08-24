#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    void pattern8(int n){
        for(int i=1; i<=n; i++){
            for(int j=1; j<=n-i; j++){
                cout<<" ";
            }for(int j=1; j<=2*i-1; j++){
                cout<<"*";
            }
            for(int j=1; j<=n-1; j++){
                cout<<" ";
            }
            cout<<"\n";
        }
        for(int i=n; i>=1; i--){
            for(int j=1; j<=n-i; j++){
                cout<<" ";
            }
            for(int j=1; j<=2*i-1;j++){
                cout<<"*";
            }
            for(int i=1;i<=n-i;i++){
                cout<<" ";
            }
            cout<<"\n";
        }
    }
};

int main(){
    int n;
    cin>>n;
    Solution sol;
    sol.pattern8(n);
    return 0;
}