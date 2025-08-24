#include<bits/stdc++.h>
using namespace std;

class BaseClass{
    public:
    int side;
    int len;
    int bth;
    void setValues(int s,int l,int b){
        side = s;
        len = l;
        bth = b;
    }
};

class DerivedClass1 : public BaseClass{
    public:
    void area(){
        int area = side*side;
        cout<<"The area is: "<<area<<'\n';
    }
};

class DerivedClass2 : public DerivedClass1{
    public:
    void perameter(){
        int p = 2*(len+bth);
        cout<<"The perimeter is: "<<p;
    }
};

int main(){
    int s,l,b;
    cin>>s>>l>>b;
    DerivedClass2 ob;
    ob.setValues(s,l,b);
    ob.area();
    ob.perameter();
    return 0;
}
