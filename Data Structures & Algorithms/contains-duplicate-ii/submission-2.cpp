class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_set<int> wndw;
        int l=0;
        for(int r=0;r<nums.size();r++){
            if(r-l>k) wndw.erase(nums[l++]);
            if(wndw.find(nums[r])!=wndw.end()) return true;
            wndw.insert(nums[r]);
        }
        return false;
    }
};