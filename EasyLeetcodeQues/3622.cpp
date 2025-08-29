class Solution {
public:
    bool checkDivisibility(int n) {
        int num=n;
        int s=0, p=1;
        while(num>0){
            int d=num%10;
            s+=d;
            p*=d;
            num=num/10;
        }
        int r=s+p;
        if(n%r!=0){
            return false;
        }
        return true;
    }
};