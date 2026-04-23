class Solution {
public:

    string encode(vector<string>& strs) {
        string res="";
        for(string str:strs){
            res+= to_string(str.length())+"$"+str;
        }
        return res;
    }

    vector<string> decode(string s) {
        vector<string> res;
        int start=0;
        int len=0;
        for(;start<s.length();){
            int delim = s.find("$",start);
            len = stoi(s.substr(start, delim-start));
            string sub = s.substr(delim+1, len);
            res.push_back(sub);
            start = delim+len+1;
        }
        return res;
    }
};
