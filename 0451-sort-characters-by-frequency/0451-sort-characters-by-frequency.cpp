class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char , int>mpp;
        for(auto it: s){
            mpp[it]++;
        }

        vector<vector<char>>bucket(s.length()+1);
        for(auto [ch , fq] : mpp){
            bucket[fq].push_back(ch);
        }        
        string ans = "";
        for(int i=s.length() ; i>=1 ; i--){
            for(auto it : bucket[i]){
                ans.append(i , it);
            }
        }return ans;


    }
};