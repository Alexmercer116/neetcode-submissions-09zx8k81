class StockSpanner {
private: stack<pair<int,int>> prices; int id;
public:
    StockSpanner() {
        id = -1;
    }
    
    int next(int price) {
        id++;
        while(!prices.empty()&& prices.top().first <= price) prices.pop();

        int span = id - (prices.empty()?-1:prices.top().second);
        prices.push({price,id});
        return span;
    }
};

/**
 * Your StockSpanner object will be instantiated and called as such:
 * StockSpanner* obj = new StockSpanner();
 * int param_1 = obj->next(price);
 */