class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int max_len = 0;
        int i=0,j;
        unordered_map<char,int> last_seen;
        for(j=0;j<s.length();j++){
            if(last_seen.count(s[j]) and last_seen[s[j]]>=i) 
                i = max(i,last_seen[s[j]]+1);
            last_seen[s[j]] = j;
            max_len = max(max_len,j-i+1);
        }
        return max_len;
    }
};
