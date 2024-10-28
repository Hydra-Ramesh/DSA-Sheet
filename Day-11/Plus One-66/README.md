Here’s the logic in short:

1. **Start from the last digit** of the array.
2. **If the digit is less than 9**, add `1` to it and return the array (no further changes needed).
3. **If the digit is 9**, set it to `0` (carrying over the `1` to the next digit).
4. **If all digits are 9** (like `[9, 9, 9]`), add a `1` at the beginning to handle the carry (result becomes `[1, 0, 0, 0]`).

This way, the function handles both simple increments and cases with carry-overs.