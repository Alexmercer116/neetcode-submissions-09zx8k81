class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> freq;
        vector<vector<int>> bucket(nums.size()+1);
        for(int num:nums){
            freq[num]++;
        }
        for(auto& item:freq){
            bucket[item.second].push_back(item.first);
        }
        vector<int> res;
        for(int i=bucket.size()-1;i>0;i--){
            for(int num:bucket[i]){
                res.push_back(num);
                if(res.size()==k) return res;
            }
        }
        return res;
    }
};
