class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int y=-1, z=-1, cy=0, cz=0;
        int n=nums.size();
        for(int i=0; i<nums.size();i++){
            if(nums[i]==y) cy++;
            else if(nums[i]==z) cz++;
            else if(cy==0){
                y=nums[i];
                cy++;
            } 
            else if(cz==0){
                z=nums[i];
                cz++;
            }
            else{
                cy--; cz--;
            }
        }

        cy=0; cz=0;
        vector<int>ans;
        for(int i=0;i<n;i++){
            if(nums[i]==y) cy++;
            else if(nums[i]==z) cz++;
        }
        if(cy>n/3) ans.push_back(y);
        if(cz>n/3) ans.push_back(z);
        return ans;
    }
};