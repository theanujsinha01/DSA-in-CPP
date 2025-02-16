#include <bits/stdc++.h>
using namespace std;

void rearrangeArray(vector<int>& nums) {
    int n = nums.size();
    vector<int> po; // To store positive numbers
    vector<int> ne; // To store negative numbers

    // Separate positive and negative numbers
    for (int i = 0; i < n; i++) {
        if (nums[i] >= 0) {
            po.push_back(nums[i]);
        } else {
            ne.push_back(nums[i]);
        }
    }

    // Rearrange the array with alternating positive and negative numbers
    for (int i = 0, j = 0, k = 0; i < n; i++) {
        if (i % 2 == 0) {
            nums[i] = po[j++];
        } else {
            nums[i] = ne[k++];
        }
    }

    
}

// Example usage
int main() {
    vector<int> nums = {3, 11, 2, -2, -5, -3};
    rearrangeArray(nums);

    // Print rearranged array
    for(int i = 0; i < nums.size(); i++) {
        cout << nums[i] << " ";
    }
    return 0;
}
