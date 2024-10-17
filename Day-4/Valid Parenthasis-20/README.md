**Stack**
### Logic:

1. **Using a Stack for Matching**:
   - The key idea is to use a **stack** to help track the order of opening brackets. Each time we encounter a closing bracket, we compare it with the top element of the stack (i.e., the most recent unmatched opening bracket). If they match, we pop the opening bracket off the stack.

2. **Iteration with a While Loop**:
   - We traverse through the string character by character using a `while` loop. The `i` variable acts as an index to keep track of the current position in the string.
   - If we find an opening bracket (`(`, `{`, `[`), we **push** it onto the stack.
   - If we find a closing bracket (`)`, `}`, `]`), we:
     - Check if the stack is **empty**. If it is, the closing bracket has no corresponding opening bracket, so the string is invalid.
     - Otherwise, we **pop** the top of the stack (the most recent opening bracket) and check if it matches the current closing bracket:
       - `)` matches `(`
       - `}` matches `{`
       - `]` matches `[`
     - If the brackets don't match, the string is invalid.

3. **Final Check**:
   - After processing all characters, if the stack is **empty**, it means all opening brackets were properly matched and closed. The string is valid.
   - If the stack is **not empty**, it means there are unmatched opening brackets left, making the string invalid.