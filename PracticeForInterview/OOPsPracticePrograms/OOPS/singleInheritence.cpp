#include<iostream>
using namespace std;

class baseClass{
    public:
    int side;
    void setValues(int s){
        side = s;
    }
};

class DerivedClass: public baseClass{ //single inheritence
    public:
    void area(){
        int a=side*side;
        cout<<"the area is: "<<a;
    }
};

int main(){
    int s;
    cin>>s;
    DerivedClass ob;
    ob.setValues(s);
    ob.area();
    return 0;
}