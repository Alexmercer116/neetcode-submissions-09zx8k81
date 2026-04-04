class Solution {
public:
    bool isAnagram(string s, string t) {
        //using space
        unordered_map<char,int> chars;
        for(int i=0;i<s.size();i++){
            chars[s[i]]++;
        }
        for(int i=0;i<t.size();i++){
            if(chars.find(t[i])==chars.end()) return false;
            chars[t[i]]--;
        }
        for(int i=0;i<s.size();i++){
            if(chars[s[i]]>0) return false;
        }
        return true;
    }
};
