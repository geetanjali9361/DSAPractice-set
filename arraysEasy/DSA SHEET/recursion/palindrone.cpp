#include<bits/stdc++.h>
using namespace std;

class Solution{	
	public:		
		bool palindromeCheck(string& s){
			//your code goes here
            int n = s.length();
            return func(s,0,n-1);
		}
    private:
        bool func(string s, int i, int j){
            if(i>=j) return true;
            if(s[i]!=s[j]) return false;
            return func(s,i+1,j-1);
        }
};

int main(){
    string s;
    getline(cin,s);
    Solution sol;
    if (sol.palindromeCheck(s)) {
        cout << "Palindrome\n";
    } else {
        cout << "Not a Palindrome\n";
    }
    return 0;
}
