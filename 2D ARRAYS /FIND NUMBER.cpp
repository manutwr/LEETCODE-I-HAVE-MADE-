
class Solution {
private:
    // Helper function to perform binary search in a specific row
    bool searchInRow(const vector<vector<int>>& mat, int target, int row) {
        int n = mat[0].size();
        int st = 0, end = n - 1;

        while (st <= end) {
            int mid = st + (end - st) / 2;

            if (mat[row][mid] == target) {
                return true;
            } 
            else if (mat[row][mid] < target) {
                st = mid + 1;
            } 
            else {
                end = mid - 1;
            }
        }
        return false;
    }

public:
    // Main function wrapped inside the class
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m = matrix.size();
        if (m == 0) return false;
        int n = matrix[0].size();

        int startRow = 0, endRow = m - 1;

        while (startRow <= endRow) {
            int midRow = startRow + (endRow - startRow) / 2;

            // Check if the target lies within the current row's range
            if (target >= matrix[midRow][0] && target <= matrix[midRow][n - 1]) {
                return searchInRow(matrix, target, midRow);
            } 
            else if (target > matrix[midRow][n - 1]) {
                startRow = midRow + 1;
            } 
            else {
                endRow = midRow - 1;
            }
        }

        return false;
    }
};
