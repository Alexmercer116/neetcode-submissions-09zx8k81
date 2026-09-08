class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> opernds;
        for(auto token : tokens){
            if(token=="*"){
                int a = opernds.top();
                opernds.pop();
                int b = opernds.top();
                opernds.pop();
                opernds.push(a*b);
            }
            else if(token=="/"){
                int a = opernds.top();
                opernds.pop();
                int b = opernds.top();
                opernds.pop();
                opernds.push(b/a);
            }
            else if(token=="+"){
                int a = opernds.top();
                opernds.pop();
                int b = opernds.top();
                opernds.pop();
                opernds.push(a+b);
            }
            else if(token=="-"){
                int a = opernds.top();
                opernds.pop();
                int b = opernds.top();
                opernds.pop();
                opernds.push(b-a);
            }
            else opernds.push(stoi(token));
        }
        return opernds.top();
    }
};
