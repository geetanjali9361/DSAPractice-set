#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    getline(cin,s);


    //now precompute
    int hash[256] = {0};
    for(int i=0;i<s.size();i++){
        hash[s[i]]++;
    }

    int q;
    cin>>q;
    while(q--){
        char c;
        cin>>c;
        cout<<"This character occured: "<<hash[c]<<'\n';
    }
    return 0;
}