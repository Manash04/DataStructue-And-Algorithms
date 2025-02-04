class Solution {
public:
    int maxAscendingSum(vector<int>& nums) {
        if(nums.size()==0) return 0;
        if(nums.size()==1) return nums[0];
        int sum = nums[0];
        int maxSum = INT_MIN;
        for(int i=0; i<nums.size()-1; i++){
            if(nums[i]<nums[i+1]){
                sum+=nums[i+1];
                maxSum = max(maxSum , sum);
            }else{
                maxSum = max(maxSum , sum);
                sum = nums[i+1];
            }
        }return maxSum;
    }
};