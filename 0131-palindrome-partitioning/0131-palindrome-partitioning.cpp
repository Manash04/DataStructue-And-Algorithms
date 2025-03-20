class Solution {
public:
    bool isPalindrome(string str) {
        int i = 0;
        int j = str.size() - 1;
        while (i <= j) {
            if (str[i] == str[j]) {
                i++;
                j--;
            } else {
                return false;
            }
        }
        return true;
    }

    void Fn(string s, vector<string>& ans, vector<vector<string>>& result,
            int ind, int n) {
        // break condition

        if (ind == n && !ans.empty()) {
            result.push_back(ans);
            return;
        }

        for (int i =ind ; i < s.size(); i++) {
            string str = s.substr(ind, i -ind + 1);
            if (isPalindrome(str)) {
                ans.push_back(str); 
                Fn(s, ans, result, i + 1, n);
                ans.pop_back();
            }
        }
    }
    vector<vector<string>> partition(string s) {
        vector<string> ans;
        vector<vector<string>>result;
        int n = s.size();
        Fn(s, ans, result, 0, n);
        return result;
    }
};