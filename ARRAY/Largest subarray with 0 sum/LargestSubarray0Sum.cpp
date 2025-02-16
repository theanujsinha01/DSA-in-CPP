#include <bits/stdc++.h>
using namespace std;

int maxLenSubarrayWithZeroSum(const vector<int>& arr) {
    int maxLen = 0;
    for (int i = 0; i < arr.size(); ++i) {
        int sum = 0; // Initialize sum for the current subarray

        for (int j = i; j < arr.size(); ++j) {
            sum = sum + arr[j]; // Add the current element to the sum

            // If sum becomes 0, update the maximum length
            if (sum == 0) {
                maxLen = max(maxLen, j - i + 1);
            }
        }
    }

    return maxLen;
}

int main() {
    vector<int> arr = {1, 2, -2, 4, -4};
    cout << "Length of the largest subarray with 0 sum: "
         << maxLenSubarrayWithZeroSum(arr) << endl;
    return 0;
}
