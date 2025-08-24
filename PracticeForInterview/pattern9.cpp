/*
    *    
   ***     
  *****      
 *******       
*********        
*********
 ******* 
  *****  
   ***   
    *    
*/

#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    void pattern9(int n){
        for(int i=0;i<n;i++){ //n=5
            for(int j=0;j<(n-1)-i;j++){
                cout<<" ";
            }
            for(int j=0;j<2*i+1;j++){
                cout<<"*";
            }
            for(int j=0;j<(n-1)+i;j++){
                cout<<" ";
            }
            cout<<'\n';
        }
        for(int i=n;i>=1;i--){
            for(int j=0;j<n-i;j++){
                cout<<" ";
            }
            for(int j=0;j<2*i-1;j++){
                cout<<"*";
            }
            for(int j=0;j<n-i;j++){
                cout<<" ";
            }
            cout<<'\n';
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