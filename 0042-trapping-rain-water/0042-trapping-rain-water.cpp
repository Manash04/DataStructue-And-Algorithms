class Solution {
public:
    int trap(vector<int>& height) {
        int n = height.size();
        vector<int> prefix(n);
        vector<int> surfix(n);
        int maxi = INT_MIN, mini = INT_MIN;
        for (int i = 0; i < n; i++) {
            maxi = max(maxi, height[i]);
            mini = max(mini, height[n - i - 1]);
            prefix[i]= maxi;
            surfix[n - i - 1] = mini;
        }

        long long sum = 0;
        for (int i = 0; i < n; i++) {
            if (min(prefix[i], surfix[i]) >= height[i]) {
                sum += min(prefix[i], surfix[i]) - height[i];
            }
        }
        return sum;
    }
};