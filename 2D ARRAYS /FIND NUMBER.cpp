
class Solution {
private:
    // Helper function to perform binary search in a specific row
    bool searchInRow(const vector<vector<int>>& mat, int target, int row) { // ye hai for colling fnction of binary search of an array jb matrix ka ek part solve krna rhegaa
        int n = mat[0].size();//  
        int st = 0, end = n - 1;

        while (st <= end) {
            int mid = st + (end - st) / 2;

            if (mat[row][mid] == target) { // agar mid row me hai target to 
                return true;
            } 
            else if (mat[row][mid] < target) { // agar target bada hai mid row se 
                st = mid + 1;
            } 
            else {
                end = mid - 1; // agar target chhota hai mid row se 
            }
        }
        return false;
    }

public:
    // Main function wrapped inside the class
    bool searchMatrix(vector<vector<int>>& matrix, int target) {// matrix ke andar ka function
        int m = matrix.size(); // rows 
        if (m == 0) return false;
        int n = matrix[0].size(); // column 

        int startRow = 0, endRow = m - 1; 

        while (startRow <= endRow) {
            int midRow = startRow + (endRow - startRow) / 2;

            // Check if the target lies within the current row's range
            if (target >= matrix[midRow][0] && target <= matrix[midRow][n - 1]) { // agar target mid row me hai 
                return searchInRow(matrix, target, midRow); // to uper wale function ko call do
            } 
            else if (target > matrix[midRow][n - 1]) {// agar target neeche hai mtlb bada hai to iska loop
                startRow = midRow + 1;
            } 
            else {
                endRow = midRow - 1; // agar target chhota hai mtlb neeche hai;




                
            }
        }

        return false;
    }
};
