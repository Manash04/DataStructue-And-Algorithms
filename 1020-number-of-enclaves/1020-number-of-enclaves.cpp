class Solution {
public:
    int numEnclaves(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        vector<vector<int>> vis(n, vector<int>(m, 0));
        queue<pair<int, int>> q;
        int temprow[] = {0, -1, 0, 1};
        int tempcol[] = {-1, 0, 1, 0};
        for (int i = 0; i < n; i++) {
            if (grid[i][0] == 1 && vis[i][0] != 1) {
                q.push({i, 0});
                vis[i][0] = 1;
            }
            if (grid[i][m - 1] == 1 && vis[i][m - 1] != 1) {
                q.push({i, m - 1});
                vis[i][m - 1] = 1;
            }
        }
        for (int j = 0; j < m; j++) {
            if (grid[0][j] == 1 && vis[0][j] != 1) {
                q.push({0, j});
                vis[0][j] = 1;
            }
            if(grid[n-1][j]==1 && vis[n-1][j] !=1){
                q.push({n - 1, j});
                vis[n - 1][j] = 1;
            }
        }
        while (!q.empty()) {
            int row = q.front().first;
            int col = q.front().second;
            q.pop();
            for (int i = 0; i < 4; i++) {
                int newRow = row + temprow[i];
                int newCol = col + tempcol[i];
                if (newRow >= 0 && newRow < n && newCol >=  0 && newCol < m &&
                    vis[newRow][newCol] != 1 && grid[newRow][newCol] == 1) {
                        q.push({newRow , newCol});
                        vis[newRow][newCol] = 1;
                }
            }
        }
        int cnt=0;
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                if( grid[i][j]==1 && vis[i][j]==0 ){
                    cnt++;
                }
            }
        }
        return cnt;
    }
};