class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        unordered_map<char,int> count;
        unordered_map<char,int> freq;
        for(char c:s1) count[c]++;
        for(int l=0,r=0;r<s2.size();r++){
            freq[s2[r]]++;
            if(r-l+1>s1.length()){
                if(--freq[s2[l]]==0) freq.erase(s2[l]);
                l++;
            }
            if(r-l+1==s1.length()&&count==freq) return true;
        }
        return false;
    }
};
