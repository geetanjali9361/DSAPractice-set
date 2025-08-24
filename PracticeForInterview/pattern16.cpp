/*
A
BB
CCC
DDDD
EEEEE
*/

#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    void pattern16(int n){
        for(int i=1;i<=n;i++){
        for(int j=0;j<i;j++){
            char ch=i+64;
            cout<<ch;
        }
        cout<<'\n';
    }
    }
};

int main(){
    int n;
    cin>>n;
    Solution sol;
    sol.pattern16(n);
    return 0;
}