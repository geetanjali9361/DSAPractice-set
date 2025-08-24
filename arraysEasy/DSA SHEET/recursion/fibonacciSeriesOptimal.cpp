//printing n number of fibonacci series
//time complexity- O(n)
//space complexity- O(1)

#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
     void fibonacci(int n){
        int a=0,b=1,c,i=0;
        while(i<=n){
            cout<<a<<" ";
            c=a+b;
            a=b;
            b=c;
            i++;
        }
     }
};

int main(){
    int n;
    cin>>n;
    Solution sol;
    sol.fibonacci(n);
    return 0;
}