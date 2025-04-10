class Solution {
public:
    int Fn(vector<int>& nums, int k){
        unordered_map<int, int>mpp;
        int l=0, r=0 , cnt=0;
        while(r<nums.size()){
            mpp[nums[r]]++;
            while(mpp.size()>k){
                mpp[nums[l]]--;
                if(mpp[nums[l]]==0){
                    mpp.erase(nums[l]);
                }
                l++;
            }
            cnt+=r-l+1;
            r++;
        }return cnt;
    }
    int subarraysWithKDistinct(vector<int>& nums, int k) {
        
        return Fn(nums , k) - Fn(nums , k-1);
    }
};