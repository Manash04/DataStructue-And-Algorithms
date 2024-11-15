class Solution {
public:
    int findMax(vector<vector<int>>& mat, int n, int mid) {
        int maxi = mat[0][mid], row = 0;
        for (int i = 1; i < n; i++) {
            if (mat[i][mid] > maxi) {
                maxi = mat[i][mid];
                row = i;
            }
        }
        return row;
    }

    vector<int> findPeakGrid(vector<vector<int>>& mat) {
        int n = mat.size();
        int m = mat[0].size();
        int low = 0, high = m - 1;
        while (low <= high) {
            int mid = low + (high-low)/ 2;
            int row = findMax(mat, n, mid);
            int left = mid-1>=0 ? mat[row][mid-1]: -1;
            int right = mid+1<=m-1 ? mat[row][mid+1]: -1;

            if (mat[row][mid] > left &&
                mat[row][mid] > right)
                return {row, mid};
            else if (mat[row][mid] < left)
                high = mid - 1;
            else {
                low = mid + 1;
            }
        }return {-1,-1};
    }
};