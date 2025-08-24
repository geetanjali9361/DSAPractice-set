#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    int isPrime(int n){
        bool prime=true;
        for(int i=2;i<=sqrt(n);i++){
            if(n%i==0){
                prime=false;
                return prime;
                break;
            }
        }
        return prime;
    }
};

int main(){
    int n;
    cin>>n;
    Solution sol;
    cout<<sol.isPrime(n);
    return 0;
}