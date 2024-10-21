#include <iostream>
using namespace std;

class Solution {
 public:
  double myPow(double x, long n) {
    if (n == 0)
      return 1;
    if (n < 0)
      return 1 / myPow(x, -n);
    if (n % 2 == 1)
      return x * myPow(x, n - 1);
    return myPow(x * x, n / 2);
  }
};

int main() {
  Solution solution;

  // Input base and exponent
  double x;
  long n;
  cout << "Enter base (x): ";
  cin >> x;
  cout << "Enter exponent (n): ";
  cin >> n;

  // Calculate x^n
  double result = solution.myPow(x, n);

  // Output the result
  cout << x << "^" << n << " = " << result << endl;

  return 0;
}
