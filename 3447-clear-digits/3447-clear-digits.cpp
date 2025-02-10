class Solution {
public:
    string clearDigits(string s) {
        int i=0;
        string ans="";
        while(i<s.size()){
            if(!isdigit(s[i])){
                ans+=s[i];
            }else{
                ans.pop_back();
            }
            i++;
        }return ans;
    }
};