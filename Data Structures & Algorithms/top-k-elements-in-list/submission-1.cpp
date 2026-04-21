class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> freq;
        for(int num:nums){
            freq[num]++;
        }
        vector<pair<int,int>> num_freq;
        for(auto& p:freq){
            num_freq.push_back({p.second, p.first});
        }
        sort(num_freq.rbegin(),num_freq.rend());
        vector<int> res;
        for(int i=0;i<k;i++) res.push_back(num_freq[i].second);
        return res;
    }
};
