class Solution {
public:
    int fib(int n) {
        if (n == 0 || n == 1){ // base cases important for recursion
        return n;
        }
        return fib(n-1) + fib(n-2); // simple formula recursion of fiboconni numbers  
    }
};
    
