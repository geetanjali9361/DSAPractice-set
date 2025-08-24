
/*
n=6
*          *
**        **
***      ***
****    ****
*****  *****
************
*****  *****
****    ****
***      ***
**        **
*          *
*/

#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    void pattern14(int n){
        // Upper part (decreasing stars)
        //2(n-i)
        for(int i=1; i<=n; i++){
            // Left stars
            for(int j=1; j<=i; j++){
                cout<<"*";
            }
            // Spaces in middle
            for(int j=0; j<2*(n-i); j++){
                cout<<" ";
            }
            // Right stars
            for(int j=1; j<=i; j++){
                cout<<"*";
            }
            cout<<"\n";
        }
        
        // Lower part (increasing stars)
        for(int i=n-1; i>=1; i--){
            // Left stars
            for(int j=1; j<=i; j++){
                cout<<"*";
            }
            // Spaces in middle
            for(int j=0; j<2*(n-i); j++){
                cout<<" ";
            }
            // Right stars
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
    sol.pattern14(n);
    return 0;
}