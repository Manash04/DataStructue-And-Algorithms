class Solution {
public:
    int minBitFlips(int start, int goal) {
    int ans = start ^ goal;
    int cnt=0;
    while(ans!=0){
        if(ans%2){
            cnt++;
        }
        ans/=2;
    }
    return cnt;
    }
};