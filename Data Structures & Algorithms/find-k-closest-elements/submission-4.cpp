class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        int pos = lower_bound(arr.begin(),arr.end(),x) - arr.begin();
        int l=pos-1,r= pos;
        while(r-l-1<k){
            if(l<0) r++;
            else if(r>=arr.size()) l--;
            else if(abs(arr[l]-x)<=abs(arr[r]-x)) l--;
            else r++;
        }
        return vector<int> (arr.begin()+l+1,arr.begin()+r);
    }
};