class MinStack {
    stack<pair<int,int>> res;
public:
    MinStack() {
    }
    
    void push(int val) {
        if(res.empty()) res.push({val,val});
        else res.push({val,min(val,res.top().second)});
    }
    
    void pop() {
        res.pop();
    }
    
    int top() {
        return res.top().first;
    }
    
    int getMin() {
        return res.top().second;
    }
};
