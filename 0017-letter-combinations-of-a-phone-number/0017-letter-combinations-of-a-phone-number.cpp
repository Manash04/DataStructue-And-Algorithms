class Solution {
public:
    void Fn(unordered_map<char, string>& mpp, vector<string>& ans,
            string& digits, string temp, int ind) {
        if (ind == digits.size()) {
            ans.push_back(temp);
            return;
        }

        string str = mpp[digits[ind]];
        for (char it : str) {
            temp.push_back(it);
            Fn(mpp, ans, digits, temp, ind + 1);
            temp.pop_back();
        }
    }
    vector<string> letterCombinations(string digits) {
        if(digits.empty()) return {};
        unordered_map<char, string> mpp = {
            {'2', "abc"}, {'3', "def"},  {'4', "ghi"}, {'5', "jkl"},
            {'6', "mno"}, {'7', "pqrs"}, {'8', "tuv"}, {'9', "wxyz"}};

        vector<string> ans;
        Fn(mpp, ans, digits, "", 0);
        return ans;
    }
};