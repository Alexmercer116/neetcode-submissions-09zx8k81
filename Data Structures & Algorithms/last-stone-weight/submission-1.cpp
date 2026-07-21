class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        priority_queue<int> maxheap;
        for(int stone:stones){
            maxheap.push(stone);
        }
        while(maxheap.size()>1){
            int x = maxheap.top();
            maxheap.pop();
            int y = maxheap.top();
            if(x==y) maxheap.pop();
            if(x>y) {
                maxheap.pop();
                maxheap.push(x-y);
            }
        }
        if(maxheap.size()) return maxheap.top();
        return 0;  
    }
};
