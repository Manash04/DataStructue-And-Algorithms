class Solution {
public:
    void Fn(int ind, vector<int>& temp, vector<vector<int>>& ans, int k, int n) {

        if(k==0 && n==0){
            ans.push_back(temp);
            return;
        }

                if(ind > 9 || k < 0  || n<0){
                    return;
                }

        Fn(ind + 1, temp, ans, k, n);
        temp.push_back(ind);
        Fn(ind + 1, temp, ans, k-1, n - ind);
        temp.pop_back();
    }
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<int> temp;
        vector<vector<int>> ans;
        Fn(1, temp, ans, k, n);
        return ans;
    }
};