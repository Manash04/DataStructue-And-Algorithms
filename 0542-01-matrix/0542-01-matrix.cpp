class Solution {
public:
    vector<vector<int>> updateMatrix(vector<vector<int>>& mat) {
        int n = mat.size();
        int m = mat[0].size();
        queue<pair<pair<int,int>,int>>q;
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                if(mat[i][j]==0){
                    q.push({{i,j},0});
                }else{
                    mat[i][j] = -1;
                }
            }
        }

        int delrow[] = {0,-1,0,1};
        int delcol[] = {-1,0,1,0};
        while(!q.empty()){
            int row = q.front().first.first;
            int col = q.front().first.second;
            int steps = q.front().second;
            q.pop();
            mat[row][col]=steps;
            for(int i=0; i<4; i++){
                int nrow = row + delrow[i];
                int ncol = col + delcol[i];
                if(nrow>=0 && nrow<n && ncol>=0 && ncol<m && mat[nrow][ncol]==-1){
                    mat[nrow][ncol]=mat[row][col] + 1;
                    q.push({{nrow , ncol}, steps+1});
                }
            }
        } return mat;
    }
};