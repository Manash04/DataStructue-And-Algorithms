class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxPro=INT_MIN;
        int minEle=INT_MAX;
        for (int i = 0; i < prices.size(); i++) {
            minEle=min(minEle,prices[i]);
            maxPro=max(maxPro,prices[i]-minEle);
        }
        return maxPro;

    }
    
}
;