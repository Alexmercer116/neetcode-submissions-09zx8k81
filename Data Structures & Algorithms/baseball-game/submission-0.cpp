class Solution {
public:
    int calPoints(vector<string>& ops) {
        vector<int> scores;
        int sum =0;
        for(int i=0;i<ops.size();i++){
            if(ops[i]=="+")scores.push_back(scores[scores.size()-2]+scores.back());
            else if(ops[i]=="D") scores.push_back(2*scores.back());
            else if(ops[i]=="C") scores.pop_back();
            else scores.push_back(stoi(ops[i]));
        }
        for(int score:scores){
            sum+=score;
        }
        return sum;
    }
};