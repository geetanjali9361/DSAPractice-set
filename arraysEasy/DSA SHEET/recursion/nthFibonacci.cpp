//program to find nth fibonacci number;
//0 1 1 2 3 5 8
//1 2 3 4 5 6 7
//0 1 2 3 4 5 6
#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
     void nthFibonacci(int n){
        int a=0,b=1,c,i=1;
        while(i<=n){ //n=3
            cout<<a<<" "<<i<<'\n';
            if(i==n) cout<<"nth fibonacci number is: "<<a;
            c=a+b;
            i++;
            a=b;
            b=c;
            
        }
        //cout<<"nth fibobacci number: "<<a;
     }
};

int main(){
    int n;
    cout<<"Enter n: ";
    cin>>n;
    Solution sol;
    //cout<<"nth fibobacci number: "<<
    sol.nthFibonacci(n);
    return 0;
}