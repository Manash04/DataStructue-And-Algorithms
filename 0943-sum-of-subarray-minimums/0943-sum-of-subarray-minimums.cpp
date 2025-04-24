class Solution {
public:
    int sumSubarrayMins(vector<int>& arr) {

        int mini = 0;
        vector<int> preArr(arr.size());
        stack<int> st;

        for (int i = 0; i < arr.size(); i++) {
            while (!st.empty() && arr[st.top()] >= arr[i]) {
                st.pop();
            }
            if (!st.empty()) {
                preArr[i] = st.top();
            } else {
                preArr[i] = -1;
            }
            st.push(i);
        }

        mini = 0;
        while (!st.empty())
            st.pop();
        vector<int> surArr(arr.size());
        for (int i = arr.size() - 1; i >= 0; i--) {
            while (!st.empty() && arr[st.top()] > arr[i]) {
                st.pop();
            }
            if (!st.empty()) {
                surArr[i] = st.top();
            } else {
                surArr[i] = arr.size();
            }
            st.push(i);
        }

        long long total = 0;
        long long mod = 1e9 + 7;
        for (int i = 0; i < arr.size(); i++) {
            long long left = i - preArr[i];
            long long right = surArr[i] - i;
            total = (total + (left * right % mod) * arr[i] % mod) % mod;
        }
        return total;
    }
};