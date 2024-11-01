class Solution {
public:
    // Function to find the maximum number of bananas in any pile
    int findMax(vector<int>& piles, int n) {
        int maxi = INT_MIN;
        for (int i = 0; i < n; i++) {
            maxi = max(maxi, piles[i]);
        }
        return maxi;
    }

    // Function to calculate the total hours needed with a given eating speed
    long long Calc(vector<int>& piles, int mid) {
        long long sum = 0;
        for (int i = 0; i < piles.size(); i++) {
            // Use integer arithmetic for ceiling division
            sum += (piles[i] + mid - 1) / mid;
        }
        return sum;
    }

    int minEatingSpeed(vector<int>& piles, int h) {
        int n = piles.size();
        int high = findMax(piles, n);
        int low = 1;
        int k = high;  // Initialize k to the maximum possible eating speed

        while (low <= high) {
            int mid = low + (high - low) / 2;
            long long sum = Calc(piles, mid);  // Use long long for sum

            if (sum <= h) {
                k = mid;  // Try to minimize k
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }
        return k;
    }
};
