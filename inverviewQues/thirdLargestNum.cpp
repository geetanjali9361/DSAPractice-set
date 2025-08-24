#include<iostream>
#include<vector>
#include <climits>
using namespace std;

int main(){
    vector<int>nums = {9, 4, 7, 1, 5, 9, 2, 3};
    int l=INT_MIN;
    int sl=INT_MIN;
    int tl=INT_MIN;
    for(int i : nums){
        if(i==l || i==sl || i==tl) {
        continue;
    }
        if(i>l){
            tl=sl;
            sl=l;
            l=i;
        }
        else if(i!=l && i>sl){
            tl=sl;
            sl=i;
        }
        else if(i!=l && i!=sl && i>tl){
            tl=i;
        }
    }
    if (tl == INT_MIN) {
        cout << "No third largest element found (not enough distinct elements)" << endl;
        return INT_MIN;
    }
    cout<<"Third largest element is: "<<tl;
    return 0;
}