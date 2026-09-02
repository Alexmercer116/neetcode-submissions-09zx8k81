class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        int pos = lower_bound(arr.begin(),arr.end(),x)-arr.begin();
        int l = pos-1,r=pos;
        vector<int> res;
        while(l>=0&&r<arr.size()&&(res.size()<k)){
            if(abs(arr[l]-x)<(abs(arr[r]-x))) res.push_back(arr[l--]);
            else if(abs(arr[l]-x)==(abs(arr[r]-x)) and arr[l]<arr[r]){
                res.push_back(arr[l--]);
            }
            else res.push_back(arr[r++]);
        }
        while(l>=0&&(res.size()<k)) res.push_back(arr[l--]);
        while(r<arr.size()&&(res.size()<k)) res.push_back(arr[r++]);
        sort(res.begin(),res.end());

        return res;
    }
};