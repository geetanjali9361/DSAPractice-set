#include<iostream>
using namespace std;

//function overloading is when a class have multiple function with same name but difference lies in their no of perimeters and their retuen type

class Solution{
    public:
    void function(int side){
        int area=side*side;
        cout<<"area of a circle: "<<area<<'\n';
    }
    void function(int l,int b){
        int area=l*b;
        cout<<"area of the rectangle: "<<area<<'\n';
    }
};

int main(){
    int s,l,b;
    cin>>s>>l>>b;
    Solution sol;
    sol.function(s);
    sol.function(l,b);
    return 0;
}