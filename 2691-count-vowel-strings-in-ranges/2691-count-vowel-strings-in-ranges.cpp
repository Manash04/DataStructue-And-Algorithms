class Solution {
public:
    vector<int> vowelStrings(vector<string>& words,
                             vector<vector<int>>& queries) {
        unordered_set<char> mpp = {'a', 'e', 'i', 'o', 'u'};
        vector<int> prefixSum(words.size(), 0);
        int cnt = 0;
        for (int i = 0; i < words.size(); i++) {
            string& temp = words[i];
            if (mpp.find(temp[0]) != mpp.end() &&
                mpp.find(temp[temp.size() - 1]) != mpp.end()) {
                cnt++;
            }
            prefixSum[i] = cnt;
        }
        vector<int> result;
        for (int i = 0; i < queries.size(); i++) {
            int first = queries[i][0];
            int second = queries[i][1];
            if (first == 0) {
                result.push_back(prefixSum[second]);
            } else {
                result.push_back(prefixSum[second] - prefixSum[first - 1]);
            }
        }
        return result;
    }
};