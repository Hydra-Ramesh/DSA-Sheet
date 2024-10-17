**String**
1. **Initial Check**: If the array has only one string, return that string as the common prefix.
   
2. **Sort the Strings**: Sort the array of strings lexicographically. After sorting, the longest common prefix must be shared between the first and last strings in the sorted array (since sorting puts similar prefixes together).

3. **Compare First and Last Strings**: 
   - Compare the characters of the first and last strings one by one.
   - Stop when characters no longer match or when one string ends.
   - Store the matching characters in a result string.

4. **Return the Result**: The result string contains the longest common prefix.