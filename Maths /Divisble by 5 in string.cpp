class Solution {
public:
    bool divisibleBy5(string &n) {
       
        char lastChar = n.back(); // last charecter ko identify kro

        
        if (lastChar == '0' || lastChar == '5') { // agar last charecter 5 y 0 ho 
            return true;
        }

        return false;
    }
};
