class Solution {
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        int n = image.size();
        int m = image[0].size();
      
        int ini = image[sr][sc];
        if(image[sr][sc]==color) return image;
        image[sr][sc]=color;
        int drow[] = {0 , -1 , 0 , 1};
        int dcol[] = {-1 , 0 , 1 , 0};
        queue<pair<int,int>>q;
        q.push({sr,sc});
        
        while(!q.empty()){
            int row = q.front().first;
            int col = q.front().second;
            for(int i=0; i<4; i++){
                int nrow = row + drow[i];
                int ncol = col + dcol[i];

                if(nrow>=0 && nrow<n && ncol>=0 && ncol<m && image[nrow][ncol]==ini){
                    image[nrow][ncol] = color;
                    q.push({nrow , ncol});
                }
            }
            q.pop();
        }return image;

    }
};