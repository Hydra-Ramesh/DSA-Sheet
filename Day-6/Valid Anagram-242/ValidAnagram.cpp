#include <iostream>
#include <algorithm>  // For sort function
#include <string>     // For string type

using namespace std;

class Solution {
public:
    bool isAnagram(string s, string t) {
        // Sort both strings
        sort(s.begin(), s.end());
        sort(t.begin(), t.end());
        
        // Compare the sorted strings
        return s == t;
    }
};

// Main function
int main() {
    Solution solution;
    
    // Input strings
    string s = "anagram";
    string t = "nagaram";
    
    // Check if the strings are anagrams
    if (solution.isAnagram(s, t)) {
        cout << "The strings are anagrams." << endl;
    } else {
        cout << "The strings are not anagrams." << endl;
    }
    
    return 0;
}
