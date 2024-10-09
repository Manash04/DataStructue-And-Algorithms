class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int count = 0;
        int sum = 0;
        map<int, int> mpp;
        mpp[0] = 1;  
        
        for (int i = 0; i < nums.size(); i++) {
            sum += nums[i]; 
            
            if (mpp.find(sum - k) != mpp.end()) {
                count += mpp[sum - k]; 
            }
            
            mpp[sum]++;
        }
    
        return count;
    }
};
