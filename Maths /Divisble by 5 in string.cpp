class Solution {
public:
    bool divisibleBy5(string &n) {
       
        char lastChar = n.back(); // last charecter ko identify kro

        
        if (lastChar == '0' || lastChar == '5') {
            return true;
        }

        return false;
    }
};
