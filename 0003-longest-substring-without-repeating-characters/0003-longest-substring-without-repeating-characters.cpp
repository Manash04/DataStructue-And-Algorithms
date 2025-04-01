class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        if (s.size() == 0 || s.size() == 1)
            return s.size();
        int l = 0;
        int r = 0;
        unordered_map<int, int> mpp;
        int maxLen = 0;
        while (r < s.size()) {
            if (mpp.find(s[r]) == mpp.end()) {
                mpp[s[r]]++;
                maxLen = max(maxLen, r - l + 1);
                r++;
            } else {
                while(mpp.find(s[r])!=mpp.end()){
                    mpp.erase(s[l]);
                    l++;
                }
            }
        }return maxLen;
    }
};