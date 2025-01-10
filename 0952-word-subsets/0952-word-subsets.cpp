class Solution {
public:
    vector<string> wordSubsets(vector<string>& words1, vector<string>& words2) {
        unordered_map<char, int> mpp; 

        for (const string& word : words2) {
            unordered_map<char, int> tempFreq;
            for (char c : word) {
                tempFreq[c]++;
            }
            for (auto& it : tempFreq) {
                mpp[it.first] = max(mpp[it.first], it.second); 
            }
        }

        vector<string> ans;
        for (const string& word : words1) {
            unordered_map<char, int> mpp1;
            for (char c : word) {
                mpp1[c]++;
            }

            bool isUniversal = true;
            for (auto& it : mpp) {
                if (mpp1[it.first] < it.second) {
                    isUniversal = false;
                    break;
                }
            }

            if (isUniversal) {
                ans.push_back(word);
            }
        }

        return ans;
    }
};
