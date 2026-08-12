class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> res;
        sort(nums.begin(), nums.end());
        int size = nums.size();
        int i=0;
        for(int i=0;i<=size-3;i++){
            int l=i+1,r=size-1;
            int target = -nums[i];
            if(i>0 && nums[i]==nums[i-1]) continue;
            while(l<r){
                int sum = nums[l]+nums[r];
                if(sum ==target){
                    res.push_back({nums[i],nums[l],nums[r]});
                    l++;
                    r--;
                    while(l<r&&nums[l]==nums[l-1]) l++;
                    while(l<r&&nums[r]==nums[r+1]) r--;
                }
                else if(sum>target) r--;
                else l++;
            }
        }
        return res;
    }
};
