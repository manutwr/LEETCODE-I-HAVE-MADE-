class Solution {
public:
    string removeOccurrences(string s, string part) {
        while (s.length () > 0 &&  s.find( part )< s.length ()){ // cheaking that string is valid or not
            s.erase (s.find (part), part.length());
        }
        return s;
    }
};
