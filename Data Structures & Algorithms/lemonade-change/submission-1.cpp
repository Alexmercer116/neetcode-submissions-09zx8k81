class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        int five = 0;
        int ten = 0;
        for(int bill : bills){
            if(bill==5) five++;
            else if(bill==10){five--;ten++;}
            else {ten>0?(ten--,five--):five-=3;}
            if(five<0) return false;
        }
        return true;
    }
};