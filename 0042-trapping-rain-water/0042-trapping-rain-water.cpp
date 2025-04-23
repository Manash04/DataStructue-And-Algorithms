class Solution {
public:
    int trap(vector<int>& height) {
        int l=0, r = height.size()-1 , total = 0 , maxL = 0 , maxR = 0;
        while(l<r){
            if(height[l]<=height[r]){
                if(height[l]<maxL){
                    total+=maxL - height[l];
                }else{
                    maxL = height[l];
                }
                    l++;
            }else{
                if(height[r]<maxR){
                    total+=maxR - height[r];
                }else{
                    maxR = height[r];
                }
                r--;
            }
        }return total;
    }
};