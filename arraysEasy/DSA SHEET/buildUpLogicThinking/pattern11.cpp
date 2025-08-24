#include<bits/stdc++.h>
using namespace std;

class Solution{
public:
    void pattern9(int n){
        int x=0,start=1;
        for(int i=1; i<=n;i++){
            if(i%2==0){
                start=0;
            }else{
                start=1;
            }
            for(int j=1; j<=i; j++){
                cout<<start;
                start = 1-start;
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
