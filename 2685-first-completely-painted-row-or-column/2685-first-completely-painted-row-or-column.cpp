class Solution {
public:
    int firstCompleteIndex(vector<int>& arr, vector<vector<int>>& mat) {
        int n = mat.size();
        int m = mat[0].size();
               vector<int> rowPos(n * m + 1), colPos(n * m + 1) , rowFreq(n, 0), colFreq(m, 0);


        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                rowPos[mat[i][j]] = i;
                colPos[mat[i][j]] = j;
            }
        }

        for(int i=0;i<arr.size();i++){
            rowFreq[rowPos[arr[i]]]++;
            colFreq[colPos[arr[i]]]++;
            if(rowFreq[rowPos[arr[i]]] == m || colFreq[colPos[arr[i]]]==n){
                return i;
            }
        }return -1;
    }
};