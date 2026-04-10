class Solution {
public:
    void merge(vector<int>& v,int low,int mid,int high){
        vector<int> temp;
        int left = low;
        int right = mid+1;
        while(left<=mid and right<=high){
            if(v[left]<=v[right]) temp.push_back(v[left++]);
            else temp.push_back(v[right++]);
        }
        while(left<=mid) temp.push_back(v[left++]);
        while(right<=high) temp.push_back(v[right++]);
        for(int i=low;i<=high;i++){
            v[i] = temp[i-low];
        }

    }
    void mergesort(vector<int>& v,int low,int high){
        if(low>=high) return;
        int mid = low+(high-low)/2;
        mergesort(v,low,mid);
        mergesort(v,mid+1,high);
        merge(v,low,mid,high);

    }
    vector<int> sortArray(vector<int>& nums) {
        //Merge Sort
        int low =0;
        int high = nums.size()-1;
        mergesort(nums,low,high);
        return nums; 
    }
};