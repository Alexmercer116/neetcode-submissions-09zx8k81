class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int str1_len = word1.length();
        int str2_len = word2.length();
        int i=0;
        int j=0;
        string res="";
        while(i<str1_len && j<str2_len){
            res+=word1[i];
            res+=word2[j];
            i++;
            j++;
        }
        while(i<str1_len) res+=word1[i++];
        while(j<str2_len) res+=word2[j++];
        return res;
    }
};