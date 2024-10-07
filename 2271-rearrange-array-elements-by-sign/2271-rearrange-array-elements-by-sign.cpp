class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int>possitive;
        vector<int>negative;
        for(int i=0;i<nums.size();i++){
            if(nums[i]>=0){
                possitive.push_back(nums[i]);
            }else{
                negative.push_back(nums[i]);
            }
        }
        int pos=0,neg=0;
        for(int i=0;i<nums.size();i++){
            if(i%2==0){
                nums[i]=possitive[pos];
                pos++;
            }else{
                nums[i]=negative[neg];
                neg++;
            }
        }return nums;
    }
};