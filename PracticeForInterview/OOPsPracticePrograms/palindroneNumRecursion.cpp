#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    bool palindrone(int n){
        if(n>=0 && n<=9){
            cout<<"The number is pallindron";
            return true;
        }
        int onum=n;
        return func(n,0,onum);
    }
    bool func(int n, int rev,int onum){
        if(n==0){
            return rev==onum;
        }
        int digit = n%10;
        rev=rev*10+digit;
        return func(n=n/10,rev,onum);
    }
};

int main(){
    int n;
    cin>>n;
    Solution sol;
    cout<<sol.palindrone(n);
    return 0;
}