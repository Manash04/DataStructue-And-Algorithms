class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        vector<vector<int>> visit(n, vector<int>(m, 0));
        queue<pair<pair<int, int>, int>> q;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (grid[i][j] == 2) {
                    visit[i][j] = 2;
                    q.push({{i, j}, 0});
                }
            }
        }

        int tm = 0;
        int drow[] = {0, -1, 0, 1};
        int dcol[] = {-1, 0, 1, 0};
        while (!q.empty()) {
            int row = q.front().first.first;
            int col = q.front().first.second;
            int t = q.front().second;
            tm = max(t, tm);
            for (int i = 0; i < 4; i++) {
                int nrow = row + drow[i];
                int ncol = col + dcol[i];
                if (nrow >= 0 && nrow < n && ncol >= 0 && ncol < m &&
                    grid[nrow][ncol] == 1 && visit[nrow][ncol] == 0) {
                    visit[nrow][ncol] = 2;
                    q.push({{nrow, ncol}, t+1});
                }
            }
            q.pop();
        }
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (grid[i][j] == 1 && visit[i][j] != 2) {
                    return -1;
                }
            }
        }
        return tm;
    }
};