#include <iostream>
using namespace std;

class Solution {
public:
    bool isPalindrome(string s, int i, int j) {
        while (i < j) {
            if (s[i] != s[j]) {
                return false;
            }
            i++;
            j--;
        }
        return true;
    }

    string longestPalindrome(string s) {
        int maxLen = 0;
        int start = 0;
        int n = s.length();
        
        for (int i = 0; i < n; i++) {
            for (int j = i; j < n; j++) {
                if (isPalindrome(s, i, j)) {
                    if ((j - i + 1) > maxLen) {
                        maxLen = j - i + 1;
                        start = i;
                    }
                }
            }
        }
        return s.substr(start, maxLen);
    }
};

int main() {
    Solution sol;
    
    string s;
    cout << "Enter a string: ";
    cin >> s;
    
    string result = sol.longestPalindrome(s);
    cout << "Longest Palindromic Substring: " << result << endl;
    
    return 0;
}
