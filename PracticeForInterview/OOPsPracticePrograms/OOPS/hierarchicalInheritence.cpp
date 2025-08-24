#include<iostream>
using namespace std;

class BaseClass{
    public:
    int l,b;
    void setValues(int len,int bth){
        l=len;
        b=bth;
    }
};

class DerivedClass1 : public BaseClass{
    public:
    void area(){
        int a = l*b;
        cout<<"The area is: "<<a<<'\n';
    }
};
class DerivedClass2 : public BaseClass{
    public:
    void perimeter(){
        int p = 2*(l+b);
        cout<<"the perimeter is: "<<p;
    }
};

int main(){
    int l,b;
    cin>>l>>b;
    DerivedClass1 ob1;
    ob1.setValues(l,b);
    ob1.area();
    DerivedClass2 ob2;
    ob2.setValues(l,b);
    ob2.perimeter();
    return 0;
}