class Solution {
public:
    int majorityElement(vector<int>& nums) {
       sort(nums.begin(),nums.end());
       int count = 1;
       int n = nums.size();
       int i=1;
       for(;i<n;i++){
        if(nums[i-1]==nums[i]) count++;
        else if(count>(n/2)) return nums[i-1];
        else count = 1;
       }
       return nums[i-1];
    }
};