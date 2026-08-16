class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        vector<vector<int>> res;
        int n = nums.size();
        for(int i=0;i<n;i++){
            if(i>0&&nums[i-1]==nums[i]) continue;
            for(int j=i+1;j<n;j++){
                if(j>i+1&&nums[j-1]==nums[j]) continue;
                long long diff = (long long)target - (long long)nums[i]-(long long)nums[j];
                int l = j+1;
                int r = n-1;
                while(l<r){
                    long long sum = (long long)nums[l]+ (long long)nums[r];
                    if(sum==diff){
                        res.push_back({nums[i],nums[j],nums[l++],nums[r--]});
                        while(l<r&&nums[l-1]==nums[l]) l++;
                        while(l<r&&nums[r+1]==nums[r]) r--;
                    }
                    else if(sum<diff) l++;
                    else r--;
                }
            }
        }
        return res;
    }
};