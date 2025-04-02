class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int maxLen = 0;
        if(nums.size()==0) return 0;
        int l=0 , r=0 , zeros=0;
        while(r<nums.size()){
            if(nums[r]==0){
                zeros++;
            }
            while(zeros>k){
                if(nums[l]==0){
                    zeros--;
                }
                l++;
            }

            maxLen = max(maxLen , r-l+1);
            r++;
        }return maxLen;
    }
};