class Solution {
public:
    void reverseString(vector<char>& s) {
        int start = 0 , end = s.size ()-1;// 0 to n-1 
        while (start<=end){//two pointers approach swap karna hota h first element to last-1; ir yhi process tb tk karte hai jab tak start se bada end na ho jaye (start<=end);
            swap(s[start++], s[end--]);
        }
    }
};
