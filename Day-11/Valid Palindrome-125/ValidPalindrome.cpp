#include <iostream>
#include <string>
#include <algorithm> // for std::reverse
#include <cctype>    // for std::isalnum and std::tolower
using namespace std;

class Solution {
public:
    bool isPalindrome(string s) {
        string s1;
        
        // Keep only alphanumeric characters and convert them to lowercase
        for (char ele : s) {
            if (isalnum(ele)) {
                s1 += tolower(ele); // Add lowercase version of each alphanumeric character
            }
        }
        
        // Create a reversed copy of the cleaned string
        string s2 = s1;
        reverse(s2.begin(), s2.end());
        
        // Check if the cleaned string is equal to its reverse
        return s1 == s2;
    }
};

int main() {
    Solution solution;
    
    // Test cases
    string test1 = "A man, a plan, a canal: Panama";
    string test2 = "race a car";
    string test3 = " ";

    // Test case 1
    if (solution.isPalindrome(test1)) {
        cout << "The string \"" << test1 << "\" is a valid palindrome." << endl;
    } else {
        cout << "The string \"" << test1 << "\" is not a valid palindrome." << endl;
    }

    // Test case 2
    if (solution.isPalindrome(test2)) {
        cout << "The string \"" << test2 << "\" is a valid palindrome." << endl;
    } else {
        cout << "The string \"" << test2 << "\" is not a valid palindrome." << endl;
    }

    // Test case 3
    if (solution.isPalindrome(test3)) {
        cout << "The string \"" << test3 << "\" is a valid palindrome." << endl;
    } else {
        cout << "The string \"" << test3 << "\" is not a valid palindrome." << endl;
    }

    return 0;
}
