#include <bits/stdc++.h>
using namespace std;

int maximumSumSubarray(int k, vector<int> &arr, int n) {
    int sum = 0;
    int maxSum = INT_MIN;

    // Process first k elements (First window)
    for (int i = 0; i < k; i++) {
        sum += arr[i];  
    }
    maxSum = max(maxSum, sum);  // Store the max sum

    // Process the rest of the array
    for (int i = k; i < n; i++) {
        sum += arr[i];       // Add the next element
        sum -= arr[i - k];   // Remove the element going out of the window
        maxSum = max(maxSum, sum);  // Update max sum
    }

    return maxSum;
}

int main() {
    vector<int> arr = {1, 2, 9, 4, 12, 3, 7, 8};
    int k = 3;
    int n = arr.size();

    int ans = maximumSumSubarray(k, arr, n);
    cout << "Maximum sum of all subarrays of size " << k << " is: " << ans;
    return 0;
}
