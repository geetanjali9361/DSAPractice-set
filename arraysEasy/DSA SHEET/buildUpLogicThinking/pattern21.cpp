#include<bits/stdc++.h>
using namespace std;

/*
******
*    *
*    *
*    *
*    *
******
*/
class Solution{
    public:
    void pattern14(int n){
        for(int i=1; i<=n; i++){
            for(int j=1;j<=n;j++){
                if(i==1 || j==1 || i==n || j==n){
                    cout<<"*";
                }else{
                cout<<" ";
               }
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