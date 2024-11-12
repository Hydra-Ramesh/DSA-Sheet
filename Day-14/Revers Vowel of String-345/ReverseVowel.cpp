#include <iostream>
#include <unordered_set>
#include <string>
#include <algorithm>

using namespace std;

// Function to reverse vowels in a string
string reverseVowels(string s) {
    unordered_set<char> vowels = {'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'};
    int left = 0, right = s.length() - 1;

    while (left < right) {
        if (vowels.find(s[left]) == vowels.end()) {
            left++;
        } else if (vowels.find(s[right]) == vowels.end()) {
            right--;
        } else {
            // Swap vowels
            swap(s[left], s[right]);
            left++;
            right--;
        }
    }

    return s;
}

int main() {
    // Test Case 1
    string s1 = "IceCreAm";
    cout << "Input: " << s1 << endl;
    cout << "Output: " << reverseVowels(s1) << endl << endl;

    // Test Case 2
    string s2 = "leetcode";
    cout << "Input: " << s2 << endl;
    cout << "Output: " << reverseVowels(s2) << endl << endl;

    // Test Case 3
    string s3 = "aA";
    cout << "Input: " << s3 << endl;
    cout << "Output: " << reverseVowels(s3) << endl << endl;

    // Test Case 4
    string s4 = "xyz";
    cout << "Input: " << s4 << endl;
    cout << "Output: " << reverseVowels(s4) << endl << endl;

    // Test Case 5
    string s5 = "";
    cout << "Input: " << s5 << endl;
    cout << "Output: " << reverseVowels(s5) << endl << endl;

    return 0;
}
