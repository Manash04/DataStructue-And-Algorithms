class Solution {
public:
    void sortColors(vector<int>& nums) {
        int count1=0;
        int count2=0;
        int count3=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0){
count1++;
            }else if(nums[i]==1){
count2++;
            }else{
                count3++;
            }
        }
        int ind=0 ;
        for(int i=0;i<count1;i++){
            nums[ind++]=0;
        }
        for(int i=0;i<count2;i++){
            nums[ind++]=1;
        }
        for(int i=0;i<count3;i++){
            nums[ind++]=2;
        }
    }
};