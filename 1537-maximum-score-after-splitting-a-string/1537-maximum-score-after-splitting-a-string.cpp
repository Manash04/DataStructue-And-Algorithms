class Solution {
public:
    int maxScore(string s) {
        int onesCnt = 0;
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == '1') {
                onesCnt++;
            }
        }
        int zeroCnt=0;
        int cnt=0;
        int ans =0;
        for (int i = 0; i < s.size()-1; i++) {
            if (s[i] == '0') {
                zeroCnt++;
            }if(s[i]=='1'){
                cnt++;
            }
            ans = max(ans , zeroCnt + (onesCnt-cnt));
        }return ans;
    }
};