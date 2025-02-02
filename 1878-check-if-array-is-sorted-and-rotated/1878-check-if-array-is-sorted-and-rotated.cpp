class Solution {
public:
    bool check(vector<int>& nums) {
        int cnt =0;
        int n = nums.size();
        if(nums.size()==1)return true;
        if(nums.size()==0)return false;
        for(int i=1; i<nums.size();i++){
            if(nums[i]<nums[i-1]){
                cnt++;
            }
        }
        if(nums[n-1]>nums[0]){
            cnt++;
        }
        if(cnt>1)return false;
        else{
            return true;
        }
    }
};