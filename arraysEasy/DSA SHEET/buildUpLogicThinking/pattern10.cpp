#include<bits/stdc++.h>
using namespace std;

/*
n=4
*
**
***
****
***
**
*
*/

class Solution{
public:
    void pattern9(int n){
        for(int i=1; i<=n;i++){
            for(int j=1; j<=i;j++){
                cout<<"*";
            }
            cout<<"\n";
        }
        for(int i=n-1; i>=1; i--){
            for(int j=1; j<=i; j++){
                cout<<"*";
            }
            cout<<"\n";
        }
    }
};

int main(){
    int n;
    cin>>n;
    Solution sol;
    sol.pattern9(n);
    return 0;
}
