#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    void pattern13(int n){
        int num = 1;
        for(int i=1; i<=n; i++){
            for(int j=1; j<=i; j++){
                cout<<num<<" ";
                num+=1;
            }
            cout<<"\n";
        }
    }
};
int main(){
    int n;
    cin>>n;
    Solution sol;
    sol.pattern13(n);
    return 0;
}