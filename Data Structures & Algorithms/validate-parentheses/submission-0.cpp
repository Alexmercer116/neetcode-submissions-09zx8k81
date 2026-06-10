class Solution {
public:
    bool isValid(string s) {
        stack<char> vpn;
        for(int i=0;i<s.length();i++){
            if(!vpn.empty()and((vpn.top()=='[' and s[i]==']')or(vpn.top()=='(' and s[i]==')')or(vpn.top()=='{' and s[i]=='}'))) vpn.pop();
            else vpn.push(s[i]);
        }
        if(vpn.empty()) return true;
        return false;
    }
};
