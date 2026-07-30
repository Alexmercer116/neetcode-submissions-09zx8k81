class Solution {
public:
    int tribonacci(int n) {
        int tri[] = {0,1,1};
        if(n<3) return tri[n];
        for(int i=3;i<=n;i++){
            tri[i%3] = tri[0]+tri[1]+tri[2];
        }
        return tri[n%3];
    }
};