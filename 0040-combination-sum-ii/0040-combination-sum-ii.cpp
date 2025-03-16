class Solution {
public:
    void Fn(int ind, int target, vector<int>& temp, vector<vector<int>>& ans,
       vector<int>& arr) {
        if (target == 0) {
            ans.push_back(temp);
            return;
        }

        for (int i = ind; i < arr.size(); i++) {
            if(arr[ind]>target) return;
            if(i>ind && arr[i]==arr[i-1]) continue;
            temp.push_back(arr[i]);
            Fn(i+1 , target - arr[i] , temp , ans , arr);
            temp.pop_back();
        }
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(), candidates.end());
        vector<int> temp;
        vector<vector<int>> ans;
        Fn(0, target, temp, ans, candidates);
        return ans;
    }
};