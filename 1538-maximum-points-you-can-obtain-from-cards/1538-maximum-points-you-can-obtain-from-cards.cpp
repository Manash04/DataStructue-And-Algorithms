class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        if (cardPoints.size() < k)
            return 0;
        long long rightSum = 0;
        for (int i = 0; i < k; i++) {
            rightSum += cardPoints[i];
        }
        long long maxi = INT_MIN;
        maxi = max(maxi, rightSum);
        int l = k - 1;
        long long leftSum = 0;
        int r = cardPoints.size() - 1;
        while (l >= 0) {
            rightSum -= cardPoints[l];
            leftSum += cardPoints[r];
            maxi = max(maxi, rightSum + leftSum);
            l--;
            r--;
        }
        return maxi;
    }
};