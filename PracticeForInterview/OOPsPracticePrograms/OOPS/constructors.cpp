#include<iostream>
using namespace std;

class Solution{
    string n;
    int r;
    public:
    Solution(){
        
            cout<<"Enter Name";
            cin>>n;
            cout<<"Enter Roll no";
            cin>>r;
    }

        void display(){
            cout<<n<<" roll number is: "<<r;
        }
    
};

int main(){
    Solution sol;
    sol.display();
    return 0;
}