int findRow(vector<vector<int>>& matrix, int target, int n , int m) {
    int low = 0, high = n - 1;
    while (low <= high) {
        int mid = (low + high) / 2;
        if (matrix[mid][0] <= target && matrix[mid][m-1]>=target)
            return mid;
        else if (matrix[mid][0] > target) {
            high = mid - 1;
        } else {
            low = mid + 1;
        }
    }
    return -1;
}

class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n = matrix.size();
        int m = matrix[0].size();
        int row = findRow(matrix, target, n , m);
        if(row==-1) return false;
        int low = 0 , high = m - 1;
        while (low <= high) {
            int mid = (low + high) / 2;
            if (matrix[row][mid] == target)
                return true;
            else if (target > matrix[row][mid])
                low = mid + 1;
            else {
                high = mid - 1;
            }
        }
        return false;
    }
};