class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int element = nums[0], count = 0;
        for (int i = 0; i < nums.size(); i++) {
            if (element == nums[i]) {
                count++;
            } else {
                count--;
                if (count == 0) {
                    element = nums[i];
                    count = 1;
                }
            }
        }
        return element;
    }
};
