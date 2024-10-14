#include <iostream>
#include <string>
#include <algorithm> // for reverse

using namespace std;

class Solution {
public:
    string reverseWords(string s) {
        reverse(s.begin(), s.end()); // Step 1: Reverse the entire string
        int i = 0, l = 0, r = 0, n = s.length();
        
        while (i < n) {
            // Find the start and end of each word
            while (i < n && s[i] != ' ') {
                s[r++] = s[i++];
            }
            
            if (l < r) {
                reverse(s.begin() + l, s.begin() + r);  // Reverse the word
                s[r] = ' ';  // Add a space after the word
                r++;
                l = r;  // Move the left pointer to the next word's start
            }
            
            i++;  // Skip the space
        }
        
        // Remove the trailing space
        s = s.substr(0, r - 1);
        return s;
    }
};

int main() {
    Solution sol;
    
    // Example input
    string input = "the sky is blue";
    
    // Call reverseWords function
    string result = sol.reverseWords(input);
    
    // Output the result
    cout << "Reversed words: \"" << result << "\"" << endl;
    
    return 0;
}
