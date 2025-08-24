#include<bits/stdc++.h>
using namespace std;

class Solution{
    private:
    int calculator(int a,int b, int o){
        if(o==1){
            return a+b;
        }
        else if(o==2){
            return a-b;
        }
        else if(o==3){
            return a*b;
        }
        else{
            return 0;
        }
    }
    public:
    int publicFunc(){
        int a,b,o;
        cout<<"Enter a: ";
        cin>>a;
        cout<<"Enter b: ";
        cin>>b;
        cout<<"Press 1 for +"<<'\n'<<"Press 2 for -"<<'\n'<<"Press 3 for *"<<'\n';
        cout<<"Enter o ";
        cin>>o;
        return calculator(a,b,o);
    }
};

int main(){
    Solution sol;
    cout<<sol.publicFunc();
    return 0;
}