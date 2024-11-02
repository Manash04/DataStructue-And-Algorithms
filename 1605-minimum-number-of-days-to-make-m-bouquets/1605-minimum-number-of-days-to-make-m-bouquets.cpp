class Solution {
public:
    int minDays(vector<int>& bloomDay, int m, int k) {
        int n = bloomDay.size();
        if (n < (long long)m * k)
            return -1;
        int low = 1, high = *max_element(bloomDay.begin(), bloomDay.end());
        int result=-1;
        while (low <= high) {
            int mid = low + (high - low) / 2;
            int bouquets=0, count = 0;
            for (int i = 0; i < n; i++) {
                if (mid >= bloomDay[i]) {
                    count++;
                    if (count == k) {
                        count = 0;
                        bouquets++;
                        if(bouquets>=m) break;
                    }
                } else {
                    count = 0;
                }
            }
            if (bouquets>=m) {
                result = mid;
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }
        return result;
    }
};