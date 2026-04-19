class Solution {
   public:
    void sortColors(vector<int>& nums) {
        int color[3]={0};
        for(int num:nums){
            color[num]++;
        }
        int k=0;
        for(int i=0;i<3;i++){
            while(color[i]-->0){
                nums[k++]=i;
            }
        }
    }
};