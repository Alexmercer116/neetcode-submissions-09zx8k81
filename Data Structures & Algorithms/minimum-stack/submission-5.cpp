class MinStack {
private:
    long cur_min;
    stack<long> res;

public:
    MinStack() {
        
    }
    
    void push(int val) {
        if(res.empty()){
            res.push(0);
            cur_min = val;
        }
        else{
            res.push(val-cur_min);
            if(val<cur_min) cur_min = val;
        }
    }
    
    void pop() {
        if(res.empty()) return;

        long pop = res.top();
        res.pop();
        if(pop<0) cur_min = cur_min - pop;
    }
    
    int top() {
        long top = res.top();
        return (top>0)? (top+cur_min):(int)cur_min;
    }
    
    int getMin() {
        return (int)cur_min;
    }
};
