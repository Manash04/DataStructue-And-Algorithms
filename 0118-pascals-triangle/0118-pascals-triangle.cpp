class Solution {
public:
    // long long nCr(int n, int r) {
    //     long long result = 1;
    //     for (int i = 0; i < r; i++) {
    //         result = result * (n - i) / (i + 1); 
    //     }
    //     return result;
    // }

    vector<int>cal(int row){
        vector<int>temp;
        long long ans =1;
        temp.push_back(1);
        for(int i=1; i<row; i++){
        ans = ans* (row - i)/i;
        temp.push_back(ans);
        }
        return temp;
    }

    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> ans;
        for (int i = 1; i <= numRows; i++) { 
           ans.push_back(cal(i));
        }
        return ans;
    }
};