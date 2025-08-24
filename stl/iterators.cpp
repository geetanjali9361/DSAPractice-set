//iterators- points to the memory address

#include<bits/stdc++.h>
using namespace std;

int main(){
vector<int>v = {1,2,3,4,5};
vector<int>::iterator it=v.begin();
it++;
cout<<*(it)<<" ";
vector<int>v2 = {10,20,30,40};
cout<<v2[0]<<" "<<v2.at(0)<<'\n';
cout<<v2.back();
return 0;
}