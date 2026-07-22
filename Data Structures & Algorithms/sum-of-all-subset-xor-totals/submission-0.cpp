class Solution {
public:
    int findXorSum(int idx,int curXorSum, vector<int>& nums){
        if(idx==nums.size())return curXorSum;
        return findXorSum(idx+1,curXorSum^nums[idx],nums)+findXorSum(idx+1,curXorSum,nums);
    }
    int subsetXORSum(vector<int>& nums) {
        int totalXorSum = 0;
        int currXorSum = 0;
        int idx = 0;
        totalXorSum = findXorSum(idx,currXorSum,nums);
        return totalXorSum;
    }
};