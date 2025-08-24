#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    int printName(int n,string s){
        if(n==0) return 0;
        cout<<s<<'\n';
        return printName(n-1,s);
    }
};

int main(){
    int n;
    cin>>n;
    cin.ignore();
    string s;
    getline(cin,s);
    cout<<'\n';
    Solution sol;
    sol.printName(n,s);
    return 0;
}