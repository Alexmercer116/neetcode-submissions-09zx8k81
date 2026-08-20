class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int max_len = 0;
        int n = s.length();
        unordered_map<char,int> last_seen;
        int i=0,j;
        for(j=0;j<n;j++){
            if(last_seen.count(s[j]) and last_seen[s[j]]>=i)
                i = max(i,last_seen[s[j]]+1);
            last_seen[s[j]] = j;
            max_len = max(max_len,(j-i+1));
        }
        return max_len;
    }
};
