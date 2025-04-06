class Solution {
public:
    int characterReplacement(string s, int k) {

        unordered_map<char,int>mpp;
        int l=0 , r=0 , maxFreq =0 , maxLen =0 , changes =0;

        while(r<s.size()){
            mpp[s[r]]++;
            maxFreq = max(maxFreq , mpp[s[r]]);
            changes = r-l+1 - maxFreq;                        
            while(changes>k){
                mpp[s[l]]--;
                maxFreq--;
                l++;
                for(auto &it: mpp){
                    maxFreq = max(maxFreq , it.second);
                }
                changes = r-l+1 - maxFreq;
            }
            if(changes<=k){
               maxLen = max(maxLen , r-l+1);
               r++;
            }
        }return maxLen;
      
    }
};