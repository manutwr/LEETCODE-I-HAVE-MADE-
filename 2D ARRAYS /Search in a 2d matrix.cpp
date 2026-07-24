class Solution {
public:
    bool searchMatrix(vector<vector<int>>& mat, int target) {
        int m = mat.size() , n = mat[0].size();  // m= row size , n= column size 

        int r = 0, c =n-1;  // oo se start kia aur n-1 ko pe row and column ko kia
        while (r<m && c>=0){ // hile loop
            if (target == mat [r][c]){ // agar target mid hai to
                return true; 
            }
            else if (target > mat [r][c]){ // agar target bada hai mid se to 
                r++;
            }
            else{
                c--; // agar target chhota hai mid se to
            }
        }
        return false;
    }
};
