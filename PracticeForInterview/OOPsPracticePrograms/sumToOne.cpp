#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    void sumOfNumber(int n){
        int sum=0;
        while(n>9){
            sum=0;
            while(n>0){
                int digit=n%10;
                sum=sum+digit;
                n=n/10;
            }
                n=sum;            
        }
        if(sum==1){
            cout<<"Yes the sum of digits comes to one";
        }else{
            cout<<"Sum not possible to one";
        }
    }
};

int main(){
    int n;
    cout<<"Enter n: ";
    cin>>n;
    Solution sol;
    sol.sumOfNumber(n);
    return 0;
}