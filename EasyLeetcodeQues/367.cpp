class Solution {
public:
    bool isPerfectSquare(int num) {
        double n= sqrt(num);
        return (floor(n)==n);
    }
};