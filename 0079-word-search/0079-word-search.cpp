class Solution {
public:

bool search(vector<vector<char>>& board, string word , int i , int j , int n , int m ,int k){
    if(k == word.size())return true;
    if(i<0 || j<0 || i==n || j==m || board[i][j]!=word[k]){
        return false;
    }
    char ch = board[i][j];
    board[i][j]= '#';

    bool right = search(board , word , i , j+1 ,n , m, k+1);
    bool left = search(board , word , i , j-1 ,n , m, k+1);
    bool up = search(board , word , i+1 , j ,n , m, k+1);
    bool down = search(board , word , i-1 , j ,n , m, k+1);

    board[i][j]=ch;

    return right || left || up || down;

}
    bool exist(vector<vector<char>>& board, string word) {
        if(word.size()==0) return false;
        int n = board.size();
        int m = board[0].size();
        for(int i=0; i<n; i++){
            for(int j=0; j<m ; j++){
                if(board[i][j]==word[0]){
                    if(search(board , word , i ,j , n , m , 0)){
                        return true;
                    }
                }
            }
        }
        return false;
    }
};