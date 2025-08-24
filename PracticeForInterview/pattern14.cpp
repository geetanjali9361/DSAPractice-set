/*
A
AB
ABC
ABCD
ABCDE
*/

#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    void pattern14(int n){
        for(int i=1;i<=n;i++){
            for(int j=0;j<i;j++){
                char ch=j+65;
                cout<<ch;
            }
            cout<<"\n";
        }
    }
};

int main(){
    int n;
    cin>>n;
    Solution sol;
    sol.pattern14(n);
    return 0;
}