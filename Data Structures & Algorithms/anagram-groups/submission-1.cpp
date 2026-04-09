class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
       unordered_map<string, vector<string>> res;
       for(string s:strs){
        vector<int> freq_char(26,0);
        for(char c:s){
            freq_char[c-'a']++;
        }
        string key = to_string(freq_char[0]);
        for(int i=1;i<26;i++) key += ','+to_string(freq_char[i]);
        res[key].push_back(s);
       }
       vector<vector<string>> ans;
       for(auto p:res){
        ans.push_back(p.second);
       }
       return ans;
    }
};
