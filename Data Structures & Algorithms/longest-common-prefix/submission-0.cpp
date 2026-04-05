class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string first = strs[0];
        string res = "";
        int min_len = INT_MAX;
        for(int i=0;i<(int)strs.size();i++){
            min_len = min((int)strs[i].size(),min_len);
        }
        for(int i=0;i<min_len;i++){
            for(int j=0;j<strs.size();j++){
                if(first[i]!=strs[j][i]) return res;
            }
            res+=first[i];
        }
        return res;
    }
};