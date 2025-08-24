/*
1
01
010
1010
10101
*/

#include<bits/stdc++.h>
using namespace std;

class Solutions{
    public:
    void pattern11(int n){
        int num=1;
        for(int i=1;i<=n;i++){
            for(int j=1;j<=i;j++){
                cout<<num;
                if(num==1){
                    num=0;
                }else{
                    num=1;
                }
            }
            cout<<'\n';
        }
    }
};

int main(){
    int n;
    cin>>n;
    Solutions sol;
    sol.pattern11(n);
    return 0;
}