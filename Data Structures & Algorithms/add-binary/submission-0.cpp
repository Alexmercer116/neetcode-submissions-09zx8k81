class Solution {
public:
    string addBinary(string a, string b) {
        int i = a.length()-1;
        int j = b.length()-1;
        string sum = "";
        int carry = 0;
        while(i>=0||j>=0||carry){
            int bit = (i<0? 0 :(a[i]-'0')) + (j<0?0:(b[j]-'0'))+carry;
            carry = bit/2;
            sum+=(char)('0'+bit%2);
            i--;
            j--;
        }
        reverse(sum.begin(),sum.end());
        return sum;
    }
};