class Solution {
public:
    bool isPowerOfThree(int n) {
     
        if (n <= 0) { // if n is less than 0 then false return 
            return false;
        }
 
       
        while (n % 3 == 0) { // while lop to cheaking the divisbliy by two
            n = n / 3; // n ko 3 se devide krke lopp me daal do agar divide hne ke baad ek sbs chhota hissa 3 se divible ho gyaa to 2 ki power hai
        }

    
        return n == 1; // if not any output then return 1 
    }
};
