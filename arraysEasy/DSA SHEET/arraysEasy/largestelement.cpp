#include<bits/stdc++.h>
using namespace std;

//largest element in the array

class Solution{
  public:
      void largestElement(vector<int>& v){
        int l=v[0];
        for(int i=1;i<v.size();i++){
          if(v[i]>l){
            l=v[i];
          }
        }
        cout<<l;
    }
};
int main(){
  int n;
  cin>>n;
  vector<int>v;
  for(int i=0;i<n;i++){
    int temp;
    cin>>temp;
    v.push_back(temp);
  }
  Solution sol;
  sol.largestElement(v);
  return 0;
}