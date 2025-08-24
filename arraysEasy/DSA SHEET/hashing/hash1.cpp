#include<bits/stdc++.h>
using namespace std;

int main(){

    //we will take a array input first
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    //for we will do precompute or put it in hasing

    int hash[10] = {0}; //now this will create a hash of size 10;
    for(int i=0;i<n;i++){
        hash[arr[i]]+=1;
    }

    //now check the how mny times a number ocuured
    int q;
    cout<<"Enter the number of elements you want to check the frequency: ";
    cin>>q;
    while(q>0){
        int num;
        cin>>num;
        cout<<"it appread for: "<<hash[num]<<'\n';
    }
    return 0;
}