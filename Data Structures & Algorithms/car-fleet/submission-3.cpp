class Solution {
   public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        vector<pair<int, int>> car;
        int n = position.size();
        int car_fleets = 1;
        for (int i = 0; i < n; i++) {
            car.push_back({position[i], speed[i]});
        }
        sort(car.begin(), car.end(), greater<pair<int, int>>());
        double prev_time = (double)(target - car[0].first) / car[0].second;
        for (int i = 1; i < n; i++) {
            double fleet_time = (double)(target - car[i].first) / car[i].second;
            if (fleet_time > prev_time) {
                car_fleets++;
                prev_time = fleet_time;
            }
        }
        return car_fleets;
    }
};
