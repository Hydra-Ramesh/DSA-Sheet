#include <iostream>
#include <vector>
using namespace std;

class Solution {
 public:
  vector<int> plusOne(vector<int>& digits) {
    int n = digits.size();
    
    for (int i = n - 1; i >= 0; i--) { // Start from the last digit
      if (digits[i] < 9) { // If the current digit is less than 9
        digits[i]++; // Increment and return the result
        return digits;
      }
      digits[i] = 0; // If the digit is 9, set it to 0 and continue
    }
    
    // If all digits are 9, add 1 at the front (e.g., 999 -> 1000)
    digits.insert(digits.begin(), 1);
    return digits;
  }
};

int main() {
  Solution solution;
  
  // Test case: [1, 2, 3] -> [1, 2, 4]
  vector<int> digits1 = {1, 2, 3};
  vector<int> result1 = solution.plusOne(digits1);
  
  cout << "Result for [1, 2, 3]: ";
  for (int digit : result1) {
    cout << digit;
  }
  cout << endl;

  // Test case: [9, 9, 9] -> [1, 0, 0, 0]
  vector<int> digits2 = {9, 9, 9};
  vector<int> result2 = solution.plusOne(digits2);
  
  cout << "Result for [9, 9, 9]: ";
  for (int digit : result2) {
    cout << digit;
  }
  cout << endl;

  // Test case: [4, 3, 2, 1] -> [4, 3, 2, 2]
  vector<int> digits3 = {4, 3, 2, 1};
  vector<int> result3 = solution.plusOne(digits3);
  
  cout << "Result for [4, 3, 2, 1]: ";
  for (int digit : result3) {
    cout << digit;
  }
  cout << endl;

  return 0;
}
