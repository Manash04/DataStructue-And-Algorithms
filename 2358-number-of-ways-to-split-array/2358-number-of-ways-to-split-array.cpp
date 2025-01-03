class Solution {
public:
    int waysToSplitArray(vector<int>& nums) {
        int n = nums.size();
        if (n <= 1)
            return 0;
        vector<long long> prefixSum(n, 0);
        long long sum = 0;
        for (int i = 0; i < n; i++) {
            sum += nums[i];
            prefixSum[i] = sum;
        }

        int cnt = 0;
        for (int i = 0; i < n - 1; i++) {
            if (prefixSum[i] >= prefixSum[n - 1] - prefixSum[i]) {
                cnt++;
            }
        }
        return cnt;
    }
};