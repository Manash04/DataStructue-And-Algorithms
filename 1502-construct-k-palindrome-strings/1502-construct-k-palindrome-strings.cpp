class Solution {
public:
    bool canConstruct(string s, int k) {
        if(k>s.size()) return false;
        unordered_map<char, int> mpp;
        for (auto& it : s) {
            mpp[it]++;
        }
        int cnt = 0;
        for (auto& it : mpp) {
            if (it.second % 2 == 1) {
                cnt++;
            }
        }
        if(cnt>k) return false;
        else{
            return true;
        }
    }
};