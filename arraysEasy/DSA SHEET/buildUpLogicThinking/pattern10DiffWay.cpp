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
        for(int i=1; i<=2*n-1;i++){
                int stars = i;
            if(i>n) stars = 2*n-i;
            
            for(int j=1; j<=stars; j++){
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
