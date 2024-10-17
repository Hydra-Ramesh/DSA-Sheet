#include <iostream>
#include <stack>
#include <string>

using namespace std;

class Solution {
public:
    bool isValid(string s) {
        stack<char> st;  // Stack to store opening brackets
        int i = 0;  // Initialize index for iteration
        
        // Iterate through the string using a while loop
        while (i < s.length()) {
            char ele = s[i];  // Get current character
            
            // If it's an opening bracket, push it to the stack
            if (ele == '(' || ele == '{' || ele == '[') {
                st.push(ele);
            } else {
                // If stack is empty, there's no matching opening bracket
                if (st.empty()) return false;
                
                char ch = st.top();  // Get the top of the stack
                st.pop();  // Remove the top element from the stack

                // Check if the current closing bracket matches the last opened bracket
                if ((ele == ')' && ch != '(') || (ele == ']' && ch != '[') || (ele == '}' && ch != '{')) {
                    return false;  // If not a match, return false
                }
            }
            i++;  // Move to the next character
        }
        
        // If stack is empty after the loop, all brackets are matched
        return st.empty();
    }
};

int main() {
    Solution sol;
    
    // Test cases
    string s1 = "()";     // Should return true
    string s2 = "([)]";   // Should return false
    string s3 = "{[]}";   // Should return true

    // Output the results
    cout << "Test 1: " << (sol.isValid(s1) ? "Valid" : "Invalid") << endl;
    cout << "Test 2: " << (sol.isValid(s2) ? "Valid" : "Invalid") << endl;
    cout << "Test 3: " << (sol.isValid(s3) ? "Valid" : "Invalid") << endl;

    return 0;
}
