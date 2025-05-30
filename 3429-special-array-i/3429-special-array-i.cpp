class Solution {
public:
    bool isArraySpecial(vector<int>& nums) {
        if (nums.size() == 1)
            return true;
        if (nums.size() == 0)
            return false;

        for (int i = 0; i < nums.size() - 1; i++) {
            if ((nums[i] + nums[i + 1]) % 2 == 0) {
                return false;
            }
        }
        return true;
    }
};