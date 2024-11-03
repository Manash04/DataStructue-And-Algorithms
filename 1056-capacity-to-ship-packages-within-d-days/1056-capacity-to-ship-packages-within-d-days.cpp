class Solution {
public:
    int findMax(vector<int>& weights) {
        int maxi = weights[0];
        for (int i = 0; i < weights.size(); i++) {
            if (weights[i] > maxi) {
                maxi = weights[i];
            }
        }
        return maxi;
    }

    int findSum(vector<int>& weights) {
        int summation = 0;
        for (int i = 0; i < weights.size(); i++) {
            summation += weights[i];
        }
        return summation;
    }

    int findNoDays(vector<int>&weights, int mid) {
        int sum = 0, count = 1;
        for (int i = 0; i < weights.size(); i++) {
            if (sum + weights[i] > mid) {
                count++;
                sum = weights[i];
            } else {
                sum += weights[i];
            }
        } return count;
    }

    int shipWithinDays(vector<int>& weights, int days) {
        int low = findMax(weights);
        int high = findSum(weights);
        while (low <= high) {
                        int mid = low + (high - low) / 2;
            int count= findNoDays(weights, mid);
            if (count <= days) {
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }
        return low;
    }
};