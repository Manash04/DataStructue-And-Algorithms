class Solution {
public:
    int splitArray(vector<int>& nums, int k) {
        int low=*max_element(nums.begin(),nums.end());
        int high= accumulate(nums.begin(),nums.end(),0);
        while(low<=high){
            int sum=0, count=1;
            int mid= low+(high-low)/2;
            for(int i=0;i<nums.size();i++){
                if(sum + nums[i] > mid){
                    count++;
                    if(count>k) break;
                    sum=nums[i];
                }else{
                    sum+=nums[i];
                }
            }
            if(count>k){
                low=mid+1;
            }else{
                high=mid-1;
            }

        }return low;
    }
};