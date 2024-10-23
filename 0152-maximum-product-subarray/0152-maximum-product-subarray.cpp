class Solution {
public:
    int maxProduct(vector<int>& nums) {
        long long pre = 1, suff=1;
        long long maxi=INT_MIN;
        for(int i=0;i<nums.size();i++){
            pre*=nums[i];
            suff*=nums[nums.size()-i-1];
            maxi=max(maxi,max(pre,suff));
            if(pre==0) pre=1;
            if(suff==0) suff=1;
        } return maxi;
    }
};