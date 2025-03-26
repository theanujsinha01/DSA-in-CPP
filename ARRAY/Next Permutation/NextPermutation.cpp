#include <bits/stdc++.h>
using namespace std;

void nextPermutation(vector<int>& nums) {
    int n = nums.size();
    if (n <= 1) return; 

    // Step 1: Find the first decreasing element from the end
    int i = n - 2;
    while (i >= 0 && nums[i] >= nums[i + 1]) { 
        i--;
    }

    if (i >= 0) {
        // Step 2: Find the element just larger than nums[i] from the end
        int j = n - 1;
        while (nums[j] <= nums[i]) { 
            j--;
        }
        // Step 3: Swap elements at i and j
        swap(nums[i], nums[j]);   
    }

    // Step 4: Reverse the elements after index i
    reverse(nums.begin() + i + 1, nums.end());
}
int main() {
    vector<int> nums = {1, 6, 3, 5};   
    nextPermutation(nums);
    
    cout << "Next permutation: ";
    for (int num : nums) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
// Time Complexity: O(n), where n is the size of the array.
// Space Complexity: O(1).
