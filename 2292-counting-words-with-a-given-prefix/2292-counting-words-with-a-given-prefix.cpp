class Solution {
public:
    int prefixCount(vector<string>& words, string pref) {
        int cnt = 0;
        for (int i = 0; i < words.size(); i++) {
            string temp = words[i];
            if (pref == temp.substr(0, pref.size())) {
                cnt++;
            }
        }return cnt;
    }
};