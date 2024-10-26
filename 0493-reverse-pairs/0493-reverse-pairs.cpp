class Solution {
public:
    void merge(vector<int>& nums, int l, int mid, int r) {
        int left = l;
        int right = mid + 1;
        int count = 0;
        vector<int> temp;
        while (left <= mid && right <= r) {
            if (nums[left] <= nums[right]) {
                temp.push_back(nums[left]);
                left++;
            } else {

                temp.push_back(nums[right]);
                right++;
            }
        }
            while (left <= mid) {
                temp.push_back(nums[left]);
                left++;
            }
            while (right <= r) {
                temp.push_back(nums[right]);
                right++;
            }
        for (int i = 0; i < temp.size(); i++) {
            nums[i + l] = temp[i];
        }
    }
    int countPairs(vector<int>& nums, int low, int mid, int high) {
        int right = mid + 1;
        int count = 0;
        for (int i = low; i <= mid; i++) {
            while (right <= high && (long long)nums[i] > 2LL * nums[right]) {
                right++;
            }
            count += (right - (mid + 1));
        }
        return count;
    }
    int mergeSort(vector<int>& nums, int l, int r) {
        int count = 0;
        if (l >= r)
            return 0;
        int mid = (l + r) / 2;
        count += mergeSort(nums, l, mid);
        count += mergeSort(nums, mid + 1, r);
        count += countPairs(nums, l, mid, r);
        merge(nums, l, mid, r);
        return count;
    }
    int reversePairs(vector<int>& nums) {
        int n = nums.size();
        return mergeSort(nums, 0, n - 1);
    }
};