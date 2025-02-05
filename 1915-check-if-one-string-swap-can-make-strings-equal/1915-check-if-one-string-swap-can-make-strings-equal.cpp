class Solution {
public:
    bool areAlmostEqual(string s1, string s2) {
        vector<char>temp;
        for (int i = 0; i < s1.size(); i++) {
            if (s1[i] != s2[i]) {
                temp.push_back(s1[i]);
                temp.push_back(s2[i]);
            }
        }
        if(temp.size()==0){
            return true;
        }else if(temp.size()==4){
            if(temp[0]==temp[3] && temp[1]==temp[2]){
                return true;
            }
        }
        return false;
    }
};