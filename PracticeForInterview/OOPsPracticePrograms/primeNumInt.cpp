#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    int primeNumber(int n){
        
        if(n<=1) return 0;
        if(n==2) return n;
            bool isPrime = true;
            for(int j=2;j<=sqrt(n);j++){
                if(n%j==0){
                    isPrime=false;
                    break;
                }
            }
            if(isPrime){
                return n;
            }else{
                return 0;
            }       
    }
};

int main(){
    int n;
    cin>>n;
    Solution sol;
    for(int i=2;i<=n;i++){
        int result=sol.primeNumber(i);
        if(result!=0){
            cout<<i<<'\n';
        }
    
    }
    
    return 0;
}