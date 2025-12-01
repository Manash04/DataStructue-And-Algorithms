class Solution {
private:
    void dfs(vector<vector<int>>& vis, vector<vector<char>>& board, int row, int col,
             int temprow[],int tempcol[] , int n , int m) {
                vis[row][col] = 1;
                    for(int k=0; k<4; k++){
                    int newRow = row + temprow[k];
                    int newCol = col + tempcol[k];
                    if(newRow >=0 && newRow < n && newCol >=0 && newCol < m && vis[newRow][newCol]!=1 && board[newRow][newCol]=='O'){
                        dfs(vis , board , newRow , newCol , temprow , tempcol , n , m);
                    }
                }
             }

public:
    void solve(vector<vector<char>>& board) {
        int n = board.size();
        int m = board[0].size();
        vector<vector<int>> vis(n, vector<int>(m, 0));
        int temprow[] = {0, -1, 0, 1};
        int tempcol[] = {-1, 0, 1, 0};

        for (int j = 0; j < m; j++) {
            if (vis[0][j] != 1 && board[0][j] == 'O') {
                dfs(vis, board, 0, j, temprow, tempcol , n , m);
            }

            if (vis[n - 1][j] != 1 && board[n - 1][j] == 'O') {
                dfs(vis, board, n - 1, j, temprow, tempcol , n , m);
            }
        }

        for (int i = 0; i < n; i++) {
            if (vis[i][0] != 1 && board[i][0] == 'O') {
                dfs(vis, board, i, 0, temprow, tempcol , n , m);
            }
            if (vis[i][m - 1] != 1 && board[i][m - 1] == 'O') {
                dfs(vis, board, i, m - 1, temprow, tempcol , n , m);
            }
        }

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (vis[i][j] == 0 && board[i][j] == 'O') {
                    board[i][j] = 'X';
                }
            }
        }
    }
};