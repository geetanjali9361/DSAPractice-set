#include<bits/stdc++.h>
using namespace std;

//pattern print

class Solution{
    public:
    void pattern(int n){
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                cout<<"*";
            }
            cout<<"\n";
        }
    }
};
int main(){
    Solution sol;
    int n;
    cin>>n;
    sol.pattern(n);
    return 0;
}

//Time complexity- 