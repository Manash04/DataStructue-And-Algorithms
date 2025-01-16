class Solution {
public:
    int xorAllNums(vector<int>& nums1, vector<int>& nums2) {
        int n= nums1.size() , m = nums2.size();
        int result = 0;
        if(n%2==0 && m%2==0 ){
            return 0;
        }else if(n%2==1 && m%2==1){
            for(auto& it: nums1){
                result ^= it;
            }
            for(auto& it: nums2){
                result ^= it;
            }
        }else if(n%2==1 && m%2==0){
            for(auto& it: nums2){
                result ^= it;
            }
        }else if(n%2==0 && m%2==1){
            for(auto& it: nums1){
                result ^= it;
            }
        }return result;
    }
};