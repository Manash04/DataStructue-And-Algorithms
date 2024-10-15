class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        map<int, int> mpp;
        int n=nums.size();
        vector<int> ans;
        int mini= (int)n/3;
        for (int i = 0; i < nums.size(); i++) {
            mpp[nums[i]]++;
            if(mpp[nums[i]]==mini+1){
                if(find(ans.begin(),ans.end(), nums[i])==ans.end())
                ans.push_back(nums[i]);
            }
        } return ans;
       
    }
};