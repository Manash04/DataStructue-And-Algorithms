class Solution {
public:
    bool canJump(vector<int>& nums) {
        int maxInd =0;
        for(int i=0; i<nums.size(); i++){
            if(maxInd>=nums.size()){
                return true;
            }
            else if(i<=maxInd){
                if(maxInd < i+nums[i]){
                    maxInd = i+nums[i];
                }
            }else{
                return false;
            }
        }return true;
    }
};