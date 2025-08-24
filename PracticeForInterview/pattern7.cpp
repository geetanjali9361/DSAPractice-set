/*
    *
   ***
  *****
 *******
*********
*/

#include<bits/stdc++.h>
using namespace std;

class Solutions{
    public:
    void pattern7(int n){
        for(int i=0;i<n;i++){
            for(int j=1;j<=(n-1)-i;j++){
                cout<<" ";
            }
            for(int j=1;j<=2*i+1;j++){
                cout<<"*";
            }
            for(int j=1;j<=(n-1)-i;j++){
                cout<<" ";
            }
            cout<<"\n";
        }
    }
};

int main(){
    int n;
    cin>>n;
    Solutions sol;
    sol.pattern7(n);
    return 0;
}