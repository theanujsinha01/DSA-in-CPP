#include <bits/stdc++.h>
using namespace std;

// Function to find the subarray with a given target sum
vector<int> subarraySum(vector<int>& arr, int target) {
    int n = arr.size();
    int sum = 0;
    int left = 0;

    for (int right = 0; right < n; right++) {
        sum += arr[right]; // Add the current element to the sum

        // Shrink the window if the sum exceeds the target
        while (sum > target && left < right) {
            sum -= arr[left];
            left++;
        }

        // Check if the current sum equals the target
        if (sum == target) {
            return {left + 1, right + 1}; // Return 1-based indices
        }
    }

    return {-1, -1}; // If no subarray is found
}

int main() {
    vector<int> arr = {1, 2, 3, 7, 5};
    int target = 12;

    vector<int> result = subarraySum(arr, target);
    cout << "Subarray with sum " << target << " is between indices: ";
    for (auto it : result) {
        cout << it << " ";
    }

    return 0;
}

