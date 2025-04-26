class Solution {
public:
    long long subArrayRanges(vector<int>& nums) {
        stack<int> st;
        int n = nums.size();
        vector<int> pse(n);

        // Calculate Previous Smaller Element (PSE)
        for (int i = 0; i < n; i++) {
            while (!st.empty() && nums[st.top()] >= nums[i]) {
                st.pop();
            }
            if (!st.empty()) {
                pse[i] = st.top();
            } else {
                pse[i] = -1;
            }
            st.push(i);
        }
        while (!st.empty()) {
            st.pop();
        }

        // Calculate Previous Greater Element (PGE)
        vector<int> pge(n);
        for (int i = 0; i < n; i++) {
            while (!st.empty() && nums[st.top()] <= nums[i]) {
                st.pop();
            }
            if (!st.empty()) {
                pge[i] = st.top();
            } else {
                pge[i] = -1;
            }
            st.push(i);
        }
        while (!st.empty()) {
            st.pop();
        }

        // Calculate Next Smaller Element (NSE)
        vector<int> nse(n);
        for (int i = n - 1; i >= 0; i--) {
            while (!st.empty() && nums[st.top()] > nums[i]) {
                st.pop();
            }
            if (!st.empty()) {
                nse[i] = st.top();
            } else {
                nse[i] = n;
            }
            st.push(i);
        }
        while (!st.empty()) {
            st.pop();
        }
        
        // Calculate Next Greater Element (NGE)
        vector<int> nge(n);
        for (int i = n - 1; i >= 0; i--) {
            while (!st.empty() && nums[st.top()] < nums[i]) {
                st.pop();
            }
            if (!st.empty()) {
                nge[i] = st.top();
            } else {
                nge[i] = n;
            }
            st.push(i);
        }
        
        long long ans = 0;
        for (int i = 0; i < n; ++i) {
            long long maxCount = (long long)(i - pge[i]) * (nge[i] - i);
            long long minCount = (long long)(i - pse[i]) * (nse[i] - i);
            
            ans += (maxCount * nums[i]) - (minCount * nums[i]);
        }
        return ans;
    }
};