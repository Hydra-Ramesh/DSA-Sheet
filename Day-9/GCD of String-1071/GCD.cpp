#include <iostream>
#include <string>
#include <numeric> // for std::gcd in C++17

using namespace std;

class Solution {
public:
    string gcdOfStrings(string str1, string str2) {
        // Check if str1 + str2 equals str2 + str1
        if (str1 + str2 != str2 + str1) 
            return "";
        
        // Find the greatest common divisor of the lengths of the two strings
        int n = gcd(str1.size(), str2.size());
        
        // Return the substring from the start of str1 of length n
        return str1.substr(0, n);
    }
};

int main() {
    Solution solution;
    
    // Test cases
    string str1 = "ABCABC";
    string str2 = "ABC";
    
    string result = solution.gcdOfStrings(str1, str2);
    cout << "GCD of strings \"" << str1 << "\" and \"" << str2 << "\" is: \"" << result << "\"" << endl;
    
    // Another test case
    str1 = "ABABAB";
    str2 = "ABAB";
    
    result = solution.gcdOfStrings(str1, str2);
    cout << "GCD of strings \"" << str1 << "\" and \"" << str2 << "\" is: \"" << result << "\"" << endl;
    
    // Test case where there's no common divisor
    str1 = "LEET";
    str2 = "CODE";
    
    result = solution.gcdOfStrings(str1, str2);
    cout << "GCD of strings \"" << str1 << "\" and \"" << str2 << "\" is: \"" << result << "\"" << endl;

    return 0;
}