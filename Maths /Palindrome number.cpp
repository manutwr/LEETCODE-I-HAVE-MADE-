class Solution {
public:
    int reverse(int x) {
        
        int ans = 0 , rem; // continer 
        
        while(x!=0) // agar x zero ke barabar nahi hai
        {
            
            rem = x%10; // remainder 
            x/=10; // x= x/10
            if(ans>INT_MAX/10 || ans<INT_MIN/10)// for oeverflow of integer 
            return 0 ; // agar integer over flow h to 0 return kar do
            ans = ans*10+rem; // digits 
        }
        return ans;
    }
    bool isPalindrome (int n ){
        if (n<0) return false ;
        int ans = reverse (n);
        return n == ans ;
    }
};
