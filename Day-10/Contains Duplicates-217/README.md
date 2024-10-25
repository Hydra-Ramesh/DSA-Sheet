Here’s the logic of the `containsDuplicate` function in short:

1. **Sort the Array**: Sorting puts any duplicates next to each other.
2. **Check Adjacent Elements**: Iterate through the sorted array, checking if each element is the same as the next one.
   - If any adjacent elements are equal, a duplicate exists; return `true`.
3. **Return False if No Duplicates**: If the loop completes without finding duplicates, return `false`.

This approach leverages sorting and adjacent comparisons to efficiently detect duplicates in \(O(n \log n)\) time.