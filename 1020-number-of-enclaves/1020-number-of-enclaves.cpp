class Solution {
private:
    void dfs(vector<vector<int>>& vis, vector<vector<int>>& grid, int row,
             int col, int n, int m, int temprow[], int tempcol[]) {
        vis[row][col] = 1;
        for (int i = 0; i < 4; i++) {
            int newRow = row + temprow[i];
            int newCol = col + tempcol[i];
            if (newRow >= 0 && newRow < n && newCol >= 0 && newCol < m &&
                vis[newRow][newCol] != 1 && grid[newRow][newCol] == 1) {
                dfs(vis, grid, newRow, newCol, n, m, temprow, tempcol);
            }
        }
    }

public:
    int numEnclaves(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        vector<vector<int>> vis(n, vector<int>(m, 0));
        int temprow[] = {0, -1, 0, 1};
        int tempcol[] = {-1, 0, 1, 0};
        for (int j = 0; j < m; j++) {
            if (vis[0][j] != 1 && grid[0][j] == 1) {
                dfs(vis, grid, 0, j, n, m, temprow, tempcol);
            }
            if (vis[n - 1][j] != 1 && grid[n - 1][j] == 1) {
                dfs(vis, grid, n - 1, j, n, m, temprow, tempcol);
            }
        }

        for (int i = 0; i < n; i++) {
            if (vis[i][0] != 1 && grid[i][0] == 1) {
                dfs(vis, grid, i, 0, n, m, temprow, tempcol);
            }
            if (vis[i][m - 1] != 1, grid[i][m - 1] == 1) {
                dfs(vis, grid, i, m - 1, n, m, temprow, tempcol);
            }
        }
        int cnt=0;
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                if(grid[i][j]==1 && vis[i][j]!=1){
                    cnt++;
                }
            }
        }return cnt;
    }
};