class Solution {
public:
    int count[46];
    int climbStairs(int n) {
        if(n==1 || n==2) return n;
        if(count[n] !=0 )return count[n];
        return count[n] = climbStairs(n-1) + climbStairs(n-2);
    }
};