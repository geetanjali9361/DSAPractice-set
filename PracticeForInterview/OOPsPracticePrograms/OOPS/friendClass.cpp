#include<iostream>
using namespace std;

class ClassA{
    private:
    int a;
    protected:
    int b;
    public:
    void func(){
        a=10;
        b=20;
    }
    friend class ClassB;
};

class ClassB{
    public:
    void display(ClassA& ob){
        cout<<"The private variable :"<<ob.a<<'\n'; 
        cout<<"The private variable :"<<ob.b<<'\n';
    }
};

int main(){
    ClassA ob;
    ob.func();
    ClassB obj;
    obj.display(ob);
    return 0;
}