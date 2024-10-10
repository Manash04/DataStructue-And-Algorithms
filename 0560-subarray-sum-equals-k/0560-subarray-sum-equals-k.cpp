class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int count = 0;
        int preSum = 0;
        map<int, int> mpp;
        mpp[0] = 1;
        for (int i = 0; i < nums.size(); i++) {
            preSum += nums[i];
            if (mpp.find(preSum - k) != mpp.end()) {
                count += mpp[preSum - k];
            }
            mpp[preSum] += 1;
        }return count;
    }
};