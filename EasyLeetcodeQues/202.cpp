class Solution {
public:
    bool isHappy(int n) {
        unordered_map<int,bool>seen;
        while(n!=1 && !seen[n]){
            seen[n]=true;
            int sum=0;
            while(n>0){
                int d= n%10;
                sum += d * d;
                n=n/10;
            }
            n=sum;
        }
        return n==1;
    }
};