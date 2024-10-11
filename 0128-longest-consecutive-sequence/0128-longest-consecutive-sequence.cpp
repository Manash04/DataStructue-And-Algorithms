class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if (nums.size() == 0)
            return 0;
        sort(nums.begin(), nums.end());

        int current_count = 0;
        int last_smallest = INT_MIN;
        int longest = 1;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] - 1 == last_smallest) {
                current_count += 1;
                last_smallest = nums[i];
            } else if (nums[i] != last_smallest) {
                current_count = 1;
                last_smallest = nums[i];
            }
            longest = max(longest, current_count);
        }
        return longest;
    }
};