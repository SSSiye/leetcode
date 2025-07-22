class Solution {
public:

int count[46] = {0};
    int climbStairs(int n) {
        if(n<=2) return n;
        if( count[n] != 0 )return count[n];
        return count[n] = climbStairs(n-1) + climbStairs(n-2);
    }
};