### Logic:

1. **Use Two Pointers**:
   - Place one pointer (`left`) at the start and the other (`right`) at the end of the string.

2. **Check for Vowels**:
   - If the character at `left` is not a vowel, move the `left` pointer forward.
   - If the character at `right` is not a vowel, move the `right` pointer backward.

3. **Swap Vowels**:
   - If both `left` and `right` point to vowels, swap the characters and move both pointers inward.

4. **Repeat Until Pointers Meet**:
   - Continue until `left` is no longer less than `right`.

This ensures all vowels are reversed while non-vowel characters remain in their original positions.