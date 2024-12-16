class Solution {
public:
    vector<int> getFinalState(vector<int>& nums, int k, int multiplier) {
        priority_queue<pair<int, int>, vector<pair<int, int>>,
                       greater<pair<int, int>>>
            minHeap;

        for (int i = 0; i < nums.size(); i++) {
            minHeap.push({nums[i], i});
        }
        while (!minHeap.empty() && k > 0) {
            int temp = minHeap.top().first;
            int ind = minHeap.top().second;
            minHeap.pop();
            minHeap.push({temp*multiplier,ind});
            k--;
        }
        
        while(!minHeap.empty()){
            int temp = minHeap.top().first;
            int ind = minHeap.top().second;
            nums[ind]=temp;
            minHeap.pop();
           
        }return nums;
    }
};