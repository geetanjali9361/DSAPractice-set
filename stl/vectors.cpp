//basic vectors
//basic vector function how to push and read vectors value

#include<bits/stdc++.h>
using namespace std;

    int main(){
    vector<int>v;
    v.push_back(1);//it pushes a element in vector
    v.emplace_back(2);//it pushes 2 to the vector and dynamically increases the size
    vector<pair<int,int>>vec;
    vec.push_back({1,2});
    vec.emplace_back(3,4);//when we use emplace back we have this liberty to exclude{} as e,place_back will inderstand that it is an pair

    vector<int>v1(5,100);
    cout<<"v1 size: "<< v1.size();

    for(int i=0;i<v1.size();i++){
        cout<<v1[i]<<'\n';
    }

    //to make copy of vector
    vector<int>v2(v1);
    }
