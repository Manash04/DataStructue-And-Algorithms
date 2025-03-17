class Solution {
public:
    void Fn(int ind, vector<int>& temp, vector<vector<int>>& ans,
            vector<int>& nums) {
            ans.push_back(temp);
        
        for (int i = ind; i < nums.size(); i++) {
            if (i>ind && nums[i] == nums[i - 1])
                continue;
            temp.push_back(nums[i]);
            Fn(i+1 , temp , ans , nums);
            temp.pop_back();
        } 
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<int> temp;
        vector<vector<int>> ans;
        sort(nums.begin(),nums.end());
        Fn(0, temp, ans, nums);
        return ans;
    }
};