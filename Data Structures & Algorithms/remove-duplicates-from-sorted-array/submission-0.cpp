class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int k=0;
        int i=1;
        while(i<nums.size()){
            if(nums[k]!=nums[i]) nums[++k] = nums[i];
            i++;
        }
        return k+1;
    }
};