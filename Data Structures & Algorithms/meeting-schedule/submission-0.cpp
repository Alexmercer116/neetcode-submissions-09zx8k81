/**
 * Definition of Interval:
 * class Interval {
 * public:
 *     int start, end;
 *     Interval(int start, int end) {
 *         this->start = start;
 *         this->end = end;
 *     }
 * }
 */

class Solution {
private:
    bool static compare(Interval intv1, Interval intv2){
        return intv1.start<intv2.start;
    }
public:
    bool canAttendMeetings(vector<Interval>& intervals) {
        sort(intervals.begin(),intervals.end(),compare);
        for(int i=1; i<intervals.size(); i++){
            if(intervals[i-1].end>intervals[i].start) return false;
        }
        return true;
    }
};
