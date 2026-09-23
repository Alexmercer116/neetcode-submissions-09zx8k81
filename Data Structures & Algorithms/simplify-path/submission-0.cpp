class Solution {
public:
    string simplifyPath(string path) {
        vector<string> stk;
        string name;
        for(char c:path+"/"){
            if(c=='/'){
                if(name==".."){
                    if(!stk.empty()) stk.pop_back();
                }
                else if(!name.empty() && name!=".") stk.push_back(name);
                name.clear();
            }
            else name+=c;
        }
        string simple_path = "/";
        for(int i=0;i<stk.size();i++){
            if(i>0) simple_path +="/";
            simple_path+=stk[i];
        }
        return simple_path;
    }
};