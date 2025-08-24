//printing 1-n prime numbers

#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    void primeNumbers(int n){
        if(n<=1) return;
        if(n>=2) cout<<"2"<<'\n';

        for(int i=3;i<=n;i++){
            bool isPrime=true;
            for(int j=2;j<=sqrt(i);j++){
                if(i%j==0){
                    isPrime=false;
                    break;
                }
            }
            if(isPrime){
                cout<<i<<'\n';
            }
        }
    }
};

int main(){
    int n;
    cin>>n;
    cout<<'\n';
    Solution sol;
    sol.primeNumbers(n);
    return 0;
}