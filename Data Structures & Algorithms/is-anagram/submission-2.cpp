class Solution {
public:
    bool isAnagram(string s, string t) {
        //using space
        if(s.size()!=t.size()) return false;
        unordered_map<char,int> chars;
        for(int i=0;i<s.size();i++){
            chars[s[i]]++;
        }
        for(int i=0;i<t.size();i++){
            if(chars.find(t[i])==chars.end()) return false;
            else if(chars[t[i]]>0)chars[t[i]]--;
        }
        for(int i=0;i<s.size();i++){
            if(chars[s[i]]>0) return false;
        }
        return true;
    }
};
