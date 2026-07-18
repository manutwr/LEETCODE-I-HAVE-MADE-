class Solution {
public:
    int countPrimes(int n) {
       vector <bool> isPrime(n+1,  true );
       int count = 0; // initialise count with 0
      
     for (int i = 2 ; i<n ; i++){ // loop for cheacking prime 
        if (isPrime [i]){// cheacking if prime or not 
            count ++;

            for (int j = i*2;  j<n ; j+=i){
                isPrime [j]= false;
            }
        }
     }

      return count ;

    }
};
