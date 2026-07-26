class Solution {
public:
    int climbStairs(int n) {
        if(n==1) return 1;
        if(n==2) return 2;
        int ways_1 = 1;
        int ways_2 = 2;
        int total_ways = 0;
        for(int i=3;i<=n;i++){
            total_ways = ways_1+ways_2;
            ways_1 = ways_2;
            ways_2 = total_ways;
        }
        return total_ways;
    }
};
