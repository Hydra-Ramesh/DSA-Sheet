#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    void sortColors(vector<int>& nums) {
        int lo = 0;
        int mid = 0;
        int hi = nums.size() - 1;

        while (mid <= hi) {
            if (nums[mid] == 0) {
                swap(nums[lo], nums[mid]);
                lo++;
                mid++;
            } else if (nums[mid] == 2) {
                swap(nums[mid], nums[hi]);
                hi--;
            } else {
                mid++;
            }
        }
    }
};

int main() {
    Solution sol;

    // Example array with 0s, 1s, and 2s
    vector<int> nums = {2, 0, 2, 1, 1, 0};

    // Print array before sorting
    cout << "Before sorting: ";
    for (int num : nums) {
        cout << num << " ";
    }
    cout << endl;

    // Call the sortColors function
    sol.sortColors(nums);

    // Print array after sorting
    cout << "After sorting: ";
    for (int num : nums) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
