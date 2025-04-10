class Solution {
public:
    int numberOfSubstrings(string s) {
        vector<int>nums(3,-1);
        int l=0, r=0, cnt=0;
        int mini =INT_MAX;
        while(r<s.size()){
            nums[s[r]-'a']=r;
            if(nums[0]!=-1 && nums[1]!=-1  && nums[2]!=-1 ){
                mini = min(nums[0], nums[1]);
                mini = min(mini, nums[2]);
                cnt+=mini +1;
            }
            r++;
        }return cnt;

    }
};