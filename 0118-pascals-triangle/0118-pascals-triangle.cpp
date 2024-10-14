class Solution {
public:
vector<int>generateRows(int rows){
    vector<int>ansRows;
    long long ans =1;
    ansRows.push_back(ans);
    for(int col=1; col<rows; col++){
        ans= ans*(rows-col);
        ans=ans/col;
        ansRows.push_back(ans);
    }return ansRows;

}
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> ans;
        for (int i = 1; i <= numRows; i++) {
            ans.push_back(generateRows(i));
        }return ans;
    }
};