class Solution {
public:
    void reverseString(vector<char>& s) {
        int start = 0 , end = s.size ()-1;// 0 to n-1 
        while (start<=end){
            swap(s[start++], s[end--]);
        }
    }
};
