class Solution {
public:
    bool isPowerOfFour(int n) {
     
        if (n <= 0) { // if n is less than 0 then false return 
            return false;
        }

       
        while (n % 4 == 0) { // while lop to cheaking the divisbliy by two
            n = n / 4; // n ko 4 se devide krke lopp me daal do agar divide hne ke baad ek sbs chhota hissa 2 se divible ho gyaa to 4 ki power hai
        }

    
        return n == 1; // if not any output then return 1 
    }
};
