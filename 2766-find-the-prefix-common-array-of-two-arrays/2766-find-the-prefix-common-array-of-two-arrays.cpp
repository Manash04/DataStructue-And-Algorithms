class Solution {
public:
    vector<int> findThePrefixCommonArray(vector<int>& A, vector<int>& B) {
        int n = A.size();
        vector<int> freq(n+1, 0);
        vector<int> ans(n, 0);
        int sum = 0;
        for (int i = 0; i < n; i++) {
            if (freq[A[i]] != 0) {
                sum++;
            }
            freq[A[i]]++;
            if (freq[B[i]] != 0) {
                sum++;
            }
            freq[B[i]]++;

            ans[i] = sum;
        }
        return ans;
    }
};