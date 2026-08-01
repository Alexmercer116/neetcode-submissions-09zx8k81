class Solution {
   public:
    int minCostClimbingStairs(vector<int>& cost) {
        int len = cost.size();
        int prev_stair_cost1 = cost[0];
        int prev_stair_cost2 = cost[1];

        for (int i = 2; i < len; i++) {
            int cur_stair_cost = min(prev_stair_cost1, prev_stair_cost2) + cost[i];
            prev_stair_cost1 = prev_stair_cost2;
            prev_stair_cost2 = cur_stair_cost;
        }
        return min(prev_stair_cost1,prev_stair_cost2);
    }
};
