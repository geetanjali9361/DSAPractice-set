#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[5]={4,66,22,96,2};
    int n=5;
    int s=100;
    int it=0;
    int index;
    //appling selection sort
    for(int j=0;j<n-1;j++){
        for(int i=it; i<n; i++){
        //find the minimum
        if(arr[i]<s){
            s=arr[i];
            index=i;
        }
    }
    s=100;
    swap(arr[index],arr[it]);
    it++;
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<'\n';
    }
    return 0;
}