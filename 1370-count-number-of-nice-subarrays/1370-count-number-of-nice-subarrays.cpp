class Solution {
public:
    int atMostKOdds(const vector<int>& nums, int k) {
        if (k < 0) return 0;
        int l = 0, r = 0, count = 0, oddCount = 0;

        while (r < nums.size()) {
            if (nums[r] % 2 == 1) oddCount++;
            
            while (oddCount > k) {
                if (nums[l] % 2 == 1) oddCount--;
                l++;
            }
            count += r - l + 1;
            r++;
        }

        return count;
    }

    int numberOfSubarrays(vector<int>& nums, int k) {
        return atMostKOdds(nums, k) - atMostKOdds(nums, k - 1);
    }
};
