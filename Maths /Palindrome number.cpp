class Solution {
public:
    int reverse(int x) {
        
        int ans = 0 , rem; // continer 
        
        while(x!=0) // agar x zero ke barabar nahi hai
        {
            
            rem = x%10; // remainder 
            x/=10; // x= x/10
            if(ans>INT_MAX/10 || ans<INT_MIN/10)
            return 0 ;
            ans = ans*10+rem;
        }
        return ans;
    }
    bool isPalindrome (int n ){
        if (n<0) return false ;
        int ans = reverse (n);
        return n == ans ;
    }
};
