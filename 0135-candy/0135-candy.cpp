class Solution {
public:
    int candy(vector<int>& ratings) {
        int n = ratings.size();
        vector<int> left(n,1);
        for (int i = 1; i < n; i++) {
            if(ratings[i]>ratings[i-1]){
                left[i] = left[i -1] + 1;
            }else{
                left[i] = 1;
            }
        }
        int cnt = 1;
        int ans =0;
        ans+= max(left[n-1] , 1);
        for (int i = n - 2; i >= 0; i--) {
            if(ratings[i]>ratings[i+1]){
                cnt++;
                ans+= max(left[i],cnt);
            }else{
                cnt=1;
                ans+= max(left[i],cnt);
            }
        }
        return ans;
    }
};