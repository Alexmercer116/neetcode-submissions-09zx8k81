class Solution {
public:
    int partition(vector<int>& v,int low,int high){
        int pivot = v[low];
        int i=low+1;
        int j=high;
        while(i<=j){
            if(v[i]<=pivot) i++;
            else if(v[j]>=pivot) j--;
            else swap(v[i++],v[j--]);
        }
        swap(v[low],v[j]);
        return j;
    }
    void quickSort(vector<int>& v,int low,int high){
        if(low<high){
            int pivot = partition(v,low,high);
            quickSort(v,low,pivot-1);
            quickSort(v,pivot+1,high);
        }
    }
    vector<int> sortArray(vector<int>& nums) {
        //quick sort
        int low = 0;
        int high = nums.size()-1;
        quickSort(nums,low,high);
        return nums;
    }
};