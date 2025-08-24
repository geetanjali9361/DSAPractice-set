#include<iostream>
using namespace std;

class BaseClass{
    public:
    virtual void function(int l, int b){
        cout<<"the area of the rectangle: "<<l*b;
    }
};

class DerivedClass: public BaseClass{
    public:
    virtual void function(int l, int b) override{
        cout<<"The perimeter: "<<2*(l+b);
    }
};

int main(){
    int l,b;
    cin>>l>>b;
    DerivedClass ob;
    ob.function(l,b);
    return 0;
}