class Solution {
public:
    void Fn(int ind, vector<int>& candidates, vector<int>& temp, int target,
            vector<vector<int>>& result) {
        if (ind == candidates.size()|| target<0) {
            if (target == 0) {
                result.push_back(temp);
            }
            return;
        }
        if (candidates[ind] <= target) {
            temp.push_back(candidates[ind]);
            Fn(ind, candidates, temp, target - candidates[ind], result);
            temp.pop_back();
        }
        Fn(ind + 1, candidates, temp, target, result);
    }

    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<int>temp;
        vector<vector<int>>result;
        Fn(0, candidates, temp, target, result);
        return result;
    }
};