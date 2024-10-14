***Two Pointer***
1. **Reverse the entire string**: 
   - `reverse(s.begin(), s.end())` reverses the entire string. This helps in rearranging the words in reverse order, but each word itself is reversed.

2. **Iterate through the string**:
   - The code uses two pointers `l` (left) and `r` (right) to manage the start and end of each word as it re-reverses them in place.
   - As it moves through the string, it identifies word boundaries by checking for spaces.

3. **Re-reverse each word**:
   - For each word found (from index `l` to `r`), the word is reversed again, restoring its original order within the now reversed sentence.
   - The word is followed by a space, and `l` and `r` are updated for the next word.

4. **Trim extra spaces**:
   - After processing all the words, the last space is removed using `s = s.substr(0, r - 1)` to ensure the string doesn't end with an extra space.
