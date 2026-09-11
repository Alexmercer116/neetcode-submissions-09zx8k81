class Solution {
   public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        int n = temperatures.size();
        stack<int> warm_days;
        vector<int> res(n, 0);
        for (int i = 0; i < n; i++) {
            while (!warm_days.empty() && temperatures[warm_days.top()] < temperatures[i]) {
                int idx = warm_days.top();
                res[idx] = i - idx;
                warm_days.pop();
            }
            warm_days.push(i);
        }
        return res;
    }
};
