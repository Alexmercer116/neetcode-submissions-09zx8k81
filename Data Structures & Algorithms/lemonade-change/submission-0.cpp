class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        int usd_5 = 0;
        int usd_10 = 0;
        for(int bill : bills){
            if(bill==5) usd_5+=1;
            if(bill==10){
                usd_10+=1;
                usd_5-=1;
            }
            if(bill==20){
                if(usd_10>=1){
                usd_10-=1;
                usd_5-=1;
                }
                else{
                    usd_5-=3;
                }
            }
            if(usd_5<0||usd_10<0) return false;
        }
        return true;
    }
};