#include<iostream>
using namespace std;

class Solutions{
    public:
    int num, rev=0;
    bool palindrome(int x){
        int original = x;
        while(x>0){
            num = x % 10;
            rev = rev * 10 + num;
            x = x/10;
        }
            return original == rev;
    }
};

int main(){
Solutions sol;
int x;
cout<<"Enter number: ";
cin>>x;
cout<< sol.palindrome(x);
return 0;
}
