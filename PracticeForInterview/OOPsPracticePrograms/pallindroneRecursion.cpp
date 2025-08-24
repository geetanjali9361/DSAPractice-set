#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    int palindrone(string s){
        if(s.length()==1){
            cout<<"Yes the string is palindrone";
            return 0;
        };
        return func(0,s.length()-1,s);
    }
    int func(int i,int n, string s){
        if(i>=n){
            cout<<"Yes, the string is palindrone";
            return 0;
        }
        if(s[i]!=s[n]){
            cout<<"the string is not palindrone";
            return 0;
        }
        return func(i+1,n-1,s);
    }
};

int main(){
    string s;
    getline(cin,s);
    Solution sol;
    sol.palindrone(s);
    return 0;
}