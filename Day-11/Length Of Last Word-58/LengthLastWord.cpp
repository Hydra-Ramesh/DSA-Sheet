#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    int lengthOfLastWord(string s) {
        int length = 0;
        int i = s.size() - 1;

        // Skip any trailing spaces
        while (i >= 0 && s[i] == ' ') {
            i--;
        }

        // Count characters in the last word
        while (i >= 0 && s[i] != ' ') {
            length++;
            i--;
        }

        return length;
    }
};

int main() {
    Solution solution;
    
    string s = "Hello World   ";
    cout << "Length of the last word: " << solution.lengthOfLastWord(s) << endl;

    return 0;
}
