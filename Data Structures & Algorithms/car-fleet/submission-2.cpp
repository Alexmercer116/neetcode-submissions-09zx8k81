class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        vector<pair<int,int>> cars;
        for(int i=0;i<position.size();i++){
            cars.push_back({position[i],speed[i]});
        }
        sort(cars.begin(), cars.end(),greater<pair<int,int>>());
        stack<double> fleet;
        for(auto car:cars){
            double time = (double)(target-car.first)/car.second;
            if(fleet.empty()||time>fleet.top()) fleet.push(time); 
        }
        return fleet.size();
    }
};
