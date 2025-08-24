#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    getline(cin,s);
    string rev="";
    for(int i=s.length()-1;i>=0;i--){
        rev+=s[i];
    }
    if(rev==s){
        cout<<"is pallindrone";
    }else{
        cout<<"not pallindrone";
    }
    return 0;
}