bool comp(const vector<int>& a, const vector<int>& b) { return a[1] < b[1]; }
class Solution {
public:
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {

        if (intervals.empty()) {
            return 0;
        }
        sort(intervals.begin(), intervals.end(), comp);
        int cnt = 0;
        int ptr = intervals[0][1];
        for (int i = 1; i < intervals.size(); i++) {
            if (ptr > intervals[i][0]) {
                cnt++;
            } else {
                ptr = intervals[i][1];
            }
        }
        return cnt;
    }
};