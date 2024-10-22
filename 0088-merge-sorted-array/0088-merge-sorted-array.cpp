class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        vector<int>ans(m+n);
        int right = 0;
        int left = 0;
        int index = 0;
        while (right < m && left < n) {
            if (nums1[right] <= nums2[left]) {
                ans[index++] = nums1[right++];
            } else {
                ans[index++] = nums2[left++];
            }
        }
        while(right < m) {
            ans[index++] = nums1[right++];
        }
        while(left < n) {
            ans[index++] = nums2[left++];
        }
        for (int i = 0; i < ans.size(); i++) {
            nums1[i] = ans[i];
        }
    }
};