### Key Observations:
1. **Base case**: If \(n = 0\), \(x^n = 1\) for any `x`, because any number raised to the power of 0 is 1.
2. **Negative exponents**: If \(n < 0\), \(x^n = \frac{1}{x^{-n}}\). So we can flip the exponent to positive, and once we've calculated \(x^{-n}\), we take its reciprocal.
3. **Odd exponent**: If \(n\) is odd, you can break it down as \(x^n = x \times x^{n-1}\). This is because we can reduce an odd exponent by 1, making it even.
4. **Even exponent**: If \(n\) is even, you can use \(x^n = (x^2)^{n/2}\). This reduces the size of the problem by half in each step, which is the key to achieving logarithmic time complexity.

### Detailed Step-by-Step Logic:

1. **Base Case**: If `n == 0`, return `1`. (This is because \(x^0 = 1\).)
2. **Negative Exponent**: If `n` is negative, we need to calculate the reciprocal of the power with a positive exponent. That is, \(x^n = \frac{1}{x^{-n}}\).
3. **Odd Exponent**: If `n` is odd, we reduce the problem size by 1 and calculate:
   \[
   x^n = x \times x^{n-1}
   \]
   This is a simple step to handle odd numbers.
4. **Even Exponent**: If `n` is even, we use:
   \[
   x^n = (x^2)^{n/2}
   \]
   This reduces the size of the problem by half.

By recursively applying these steps, the function cuts the number of multiplications down significantly, leading to an \(O(\log n)\) solution.
