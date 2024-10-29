class Solution {
public:
    int FirstOccurence(vector<int>& nums, int target) {
        int low = 0, high = nums.size() - 1;
        int First = -1;
        while (low <= high) {
            int mid = (low+high)/2;
            if (nums[mid] == target) {
                First = mid;
                high = mid - 1;
            } else if (nums[mid] > target) {
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }
        return First;
    }

    int LastOccurence(vector<int>& nums, int target) {
        int low = 0, high = nums.size()-1;
        int Last = -1;
        while (low <= high) {
            int mid = (low+high)/2;
            if (nums[mid] == target) {
                Last = mid;
                low = mid + 1;
            } else if (nums[mid] > target) {
                high = mid - 1;
            } else
                low = mid + 1;
        }
        return Last;
    }

    vector<int> searchRange(vector<int>& nums, int target) {
        int first = FirstOccurence(nums, target);
        if (first == -1) {
            return {-1, -1};
        }
        int last = LastOccurence(nums, target);
        return {first, last};
    }
};