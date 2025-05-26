class Solution {
public:
    bool checkValidString(string s) {
        int maxi = 0, mini = 0;
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == '(') {
                maxi++;
                mini++;
            } else if (s[i] == ')') {
                mini--;
                maxi--;
            } else {
                mini -= 1;
                maxi += 1;
            }
            if (mini < 0) {
                mini = 0;
            }
            if (maxi < 0)
                return false;
        }if(mini==0) return true;
        else return false;
    }
};