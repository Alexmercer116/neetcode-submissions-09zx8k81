class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        int len = cost.size();
        vector<int> min_cost(len,0);
        min_cost[0] = cost[0];
        min_cost[1] = cost[1];
        for(int i=2;i<len;i++){
            min_cost[i] = min(min_cost[i-1],min_cost[i-2])+cost[i];
        }
        return min(min_cost[len-1],min_cost[len-2]);
    }
};
