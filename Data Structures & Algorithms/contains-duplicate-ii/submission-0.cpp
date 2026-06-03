class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        int i=0;
        for(;i<nums.size();i++){
            for(int j=i+1;j<nums.size();j++){
                if((abs(i-j)<=k)and(nums[i]==nums[j])) return true;
            }   
        }
        return false;
    }
};