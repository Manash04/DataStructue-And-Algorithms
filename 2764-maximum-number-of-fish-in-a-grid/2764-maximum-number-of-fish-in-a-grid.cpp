class Solution {
public:
    int dfs(vector<vector<int>>& grid, int i, int j, int m, int n, vector<vector<bool>>& vis) {
        if (i < 0 || i >= m || j < 0 || j >= n || grid[i][j] == 0 || vis[i][j]) {
            return 0;
        }

        vis[i][j] = true;

        int total = grid[i][j];

        total += dfs(grid, i - 1, j, m, n, vis); 
        total += dfs(grid, i + 1, j, m, n, vis); 
        total += dfs(grid, i, j - 1, m, n, vis); 
        total += dfs(grid, i, j + 1, m, n, vis); 

        return total;
    }

    int findMaxFish(vector<vector<int>>& grid) {
        int ans = 0;
        int m = grid.size();
        int n = grid[0].size();
        vector<vector<bool>> vis(m, vector<bool>(n, false)); 
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if (grid[i][j] != 0 && !vis[i][j]) { 
                    ans = max(ans, dfs(grid, i, j, m, n, vis));
                }
            }
        }

        return ans;
    }
};