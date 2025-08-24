/*
ABCDE
ABCD
ABC
AB
A
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    for(int i=n;i>=1;i--){
        for(int j=0;j<i;j++){
            char ch=j+65;
            cout<<ch;
        }
        cout<<'\n';
    }
    return 0;
}