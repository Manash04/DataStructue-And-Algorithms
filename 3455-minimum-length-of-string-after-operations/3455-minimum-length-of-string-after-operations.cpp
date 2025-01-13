class Solution {
public:
    int minimumLength(string s) {
        if (s.size() < 3)
            return s.size();

        unordered_map<char, int>mpp;

        for (auto& it : s) {
            mpp[it]++;
        }
        int sum =0;
        for (auto& it : mpp) {
            if(it.second % 2 == 0){
                sum+= 2;
            }else{
                sum+=1;
            }
        }return sum;
    }
};