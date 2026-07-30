class Solution {
public:
    string reverseWords(string s) {
        int n = s.length();
string ans = "";

// Reverse the entire string first
reverse(s.begin(), s.end());

int i = 0;
while (i < n) {
    // Skip any leading spaces before a word
    while (i < n && s[i] == ' ') {
        i++;
    }
    
    // Break if we reached the end of the string
    if (i >= n) break;

    string word = "";
    // Extract the current word
    while (i < n && s[i] != ' ') {
        word += s[i];
        i++; // Increments i safely
    }

    // Reverse the extracted word back to its original spelling
    reverse(word.begin(), word.end());
    
    // Build the final answer string
    if (ans.length() > 0) {
        ans += " " + word;
    } else {
        ans = word;
    }
}

return ans;

    }
};
