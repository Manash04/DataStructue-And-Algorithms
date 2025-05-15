class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        int n = heights.size();
        stack<int> st;
        int maxi = 0;

        for (int i = 0; i < n; i++) {
            while (!st.empty() && heights[st.top()] > heights[i]) {
                int temp = heights[st.top()];
                st.pop();
                if (!st.empty()) {
                    maxi = max(maxi, temp * (i - st.top() - 1));
                } else {
                    maxi = max(maxi, temp * (i - (-1) - 1));
                }
            }
                st.push(i);
        }
        while (!st.empty()) {
            int temp = heights[st.top()];
            st.pop();
            if (!st.empty()) {
                maxi = max(maxi, temp * (n - st.top() - 1));
            } else {
                maxi = max(maxi, temp * (n - (-1) - 1));
            }
        }return maxi;
    }
};