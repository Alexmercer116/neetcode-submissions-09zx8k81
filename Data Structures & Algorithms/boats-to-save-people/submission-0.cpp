class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        sort(people.begin(),people.end());
        int min_boats=0;
        int l=0;
        int r=people.size()-1;
        while(l<=r){
            if(people[l]+people[r]<=limit){
                min_boats+=1;
                l++;
                r--;
            }
            else{
                min_boats+=1;
                r--;
            }
        }
        return min_boats;
    }
};