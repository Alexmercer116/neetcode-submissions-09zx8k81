class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int> count_num;
        int n = nums.size();
        for(int i=0;i<nums.size();i++){
            count_num[nums[i]]++;
            if(count_num[nums[i]]>n/2) return nums[i];
        }
        return 0;
    }
};