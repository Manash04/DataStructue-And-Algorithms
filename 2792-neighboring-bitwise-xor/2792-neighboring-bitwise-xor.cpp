class Solution {
public:
    bool doesValidArrayExist(vector<int>& derived) {
        int cal = 0;
        for (auto& it : derived) {
            cal ^= it;
        }
        if (cal == 0)
            return true;
        else {
           return false;
        }
    }
};