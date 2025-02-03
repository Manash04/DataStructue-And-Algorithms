class Solution {
public:
    int longestMonotonicSubarray(vector<int>& nums) {
        int increaseLen = 1, decreaseLen = 1, maxLength = 1;
        for (int i = 1; i < nums.size(); i++) {
            if (nums[i] < nums[i - 1]) {
                decreaseLen++;
                increaseLen = 1;
            } else if (nums[i] > nums[i - 1]) {
                decreaseLen = 1;
                increaseLen++;
            } else {
                decreaseLen = 1;
                increaseLen = 1;
            }
            maxLength = max({maxLength, increaseLen, decreaseLen});
        }
        return maxLength;
    }
};