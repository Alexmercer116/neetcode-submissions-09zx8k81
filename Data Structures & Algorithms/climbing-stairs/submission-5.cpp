class Solution {
public:
    int climbStairs(int n) {
        if(n==1) return 1;
        if(n==2) return 2;
        int prev1 = 1;
        int prev2 = 2;
        int total_ways = 0;
        for(int i=3;i<=n;i++){
            total_ways = prev1+prev2;
            prev1 = prev2;
            prev2 = total_ways;
        }
        return total_ways;
    }
};
