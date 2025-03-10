class Solution {
public:
void calc(vector<int>&nums , vector<vector<int>>&result , int n , int ind , vector<int>&temp){
      if(ind == n){
        result.push_back(temp);
        return;
      }
      calc(nums , result , n , ind+1 , temp);
      temp.push_back(nums[ind]);
      calc(nums , result , n , ind+1 , temp);
      temp.pop_back();
}
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>>result;
        int ind=0;
        int n = nums.size();
             vector<int>temp;
        calc(nums , result , n , ind , temp);
        return result;
    }
};