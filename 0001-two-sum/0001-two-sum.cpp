class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
    map<int,int>ansMap;
    vector<int>ans;
    for(int i=0;i<nums.size();i++){
        if(ansMap.find(target-nums[i])!=ansMap.end()){
            return {ansMap[target-nums[i]],i};
        }
        ansMap[nums[i]]=i;
    }
return {-1,-1};
    }
};