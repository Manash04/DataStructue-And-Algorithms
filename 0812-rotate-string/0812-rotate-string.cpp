class Solution {
public:
    bool rotateString(string s, string goal) {
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == goal[0]) {
                string firstPart = s.substr(0, i);
                string remainingPart = s.substr(i);
                string result = remainingPart + firstPart;
                if (result == goal)
                    return true;
            }
        }
        return false;
    }
};