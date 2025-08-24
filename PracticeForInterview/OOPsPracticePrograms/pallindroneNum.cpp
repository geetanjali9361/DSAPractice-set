#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    bool pallindrone(int n){
        int num=n;
        int rev=0;
        while(n>0){
            int digit=n%10;
            rev= rev*10+digit;
            n=n/10;
        }
        return num==rev;
    }
};

int main(){
    int n;
    cin>>n;
    Solution sol;
    cout<<sol.pallindrone(n);
    return 0;
}