class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        if (nums.size() < 2)
            return false;
        priority_queue<long long, vector<long long>, greater<long long>> pq;
        for (auto it : nums) {
            pq.push(it);
        }
        int cnt = 0;
        while (pq.top() < k && pq.size() >= 2) {
            long long x = pq.top();
            pq.pop();
            long long y = pq.top();
            pq.pop();
            long long val = min(x, y) * 2 + max(x, y);
            pq.push(val);
            cnt++;
        }
        return cnt;
    }
};