class Solution {
public:
    int countPrefixSuffixPairs(vector<string>& words) {
        int cnt = 0;
        for (int i = 0; i < words.size(); i++) {
            for (int j = i + 1; j < words.size(); j++) {
                if (words[j].size() >= words[i].size()) {
                    int n = words[i].size();
                    string first = words[j].substr(0, n);
                    string last = words[j].substr(words[j].size() - n, n);
                    if (first == words[i] && last == words[i]) {
                        cnt++;
                    }
                }
            }
        }
        return cnt;
    }
};