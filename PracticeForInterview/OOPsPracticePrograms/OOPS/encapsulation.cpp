#include<bits/stdc++.h>
using namespace std;

class Solution{
    private:
    int amount=50000;
    int pin=12345;
    public:
    void atm(int enteredPin){
        if(enteredPin==pin){
            cout<<"the amount is"<<amount;
        }else{
            cout<<"Re-enter the pin";
        }
    }
};

int main(){
    int p;
    cout<<"Enter pin to see amount";
    cin>>p;
    Solution sol;
    sol.atm(p);
    return 0;
}

