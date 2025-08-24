//when a derievd class have two or more base classes

#include<iostream>
using namespace std;

class BaseClass1{
    public:
    int l,b;
    void setValues(int len, int bth){
        l=len;
        b=bth;
    }
};

class BaseClass2{
    public:
    int s;
    void areaSide(int side){
        s=side;
    }
};

class DerivedClass : public BaseClass1, public BaseClass2{
    public:
    void Solution(){
        cout<<"area of circle: "<<s*s<<'\n';
        cout<<"area of rectangle: "<<l*b<<'\n';
    }
};

int main(){
    int l,b,s;
    cin>>l>>b>>s;
    DerivedClass ob;
    ob.setValues(l,b);
    ob.areaSide(s);
    ob.Solution();
    return 0;
}