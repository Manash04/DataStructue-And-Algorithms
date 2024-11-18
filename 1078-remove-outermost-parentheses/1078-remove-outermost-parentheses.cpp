class Solution {
public:
    string removeOuterParentheses(string s) {
        string ans="";
        int count =0;
        for(int i=0; i<s.length();i++){
            if(s[i]==')') count--;
            if(count!=0) ans.push_back(s[i]);
            if(s[i]=='(') count++;
        }return ans;
    }
};