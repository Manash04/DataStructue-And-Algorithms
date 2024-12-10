class Solution {
public:
    int maximumLength(string s) {
        unordered_map<char, vector<int>> hash;

        int n = s.length();
        int i = 0;
        while (i < n) {
            int temp = 1;
            char ch = s[i];
            while (i < n - 1 && s[i] == s[i + 1]) {
                temp += 1;
                i += 1;
            }
            hash[ch].push_back(temp);
            i += 1;
        }

        int maxi = -1;
        for (auto& entry : hash) {
            vector<int>& lis = entry.second;
            sort(lis.rbegin(), lis.rend());
            
            if (lis[0] >= 3) {
                maxi = max(maxi, lis[0] - 2);
            }
            
            if (lis.size() >= 2) {
                if (lis[0] >= 2) {
                    maxi = max(maxi, min(lis[0] - 1, lis[1]));
                }
                if (lis.size() >= 3) {
                    maxi = max(maxi, min({lis[0], lis[1], lis[2]}));
                }
            }
        }

        return maxi;
    }
};