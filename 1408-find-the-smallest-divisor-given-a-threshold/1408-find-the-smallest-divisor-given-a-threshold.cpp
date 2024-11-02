class Solution {
public:
    int smallestDivisor(vector<int>& nums, int threshold) {
        int n = nums.size();
        int low = 1, high = *max_element(nums.begin(), nums.end());
        int ans = -1;
        if(n==threshold) return high;
        if(n>threshold) return -1;
        while (low <= high) {
            int sum = 0;
            int mid = low + (high - low) / 2;
            for (int i = 0; i < n; i++) {
                sum += (nums[i] + mid-1)/mid;
            }
            if (sum > threshold) {
                low = mid + 1;
            } else {
                ans = mid;
                high = mid - 1;
            }
        }
        return ans;
    }
};