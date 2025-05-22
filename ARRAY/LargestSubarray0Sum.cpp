#include <bits/stdc++.h>
using namespace std;

int maxLenSubarrayWithZeroSum(vector<int>& arr) {
    int maxLen = 0;
    for (int i = 0; i < arr.size(); i++) {
        int sum = 0;
        for (int j = i; j < arr.size(); j++) {
            sum = sum + arr[j]; 
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
// time complexity: O(n^2), where n is the size of the input array arr.
// space complexity: O(1), as we are using a constant amount of extra space for the sum and maxLen variables.

// ----------------------------------------------------------------------------------
// Pseudo code

// Start

// Input: array arr

// Function maxLenSubarrayWithZeroSum:
//     Set maxLen = 0

//     For i = 0 to arr.size() - 1:
//         Set sum = 0
//         For j = i to arr.size() - 1:
//             sum = sum + arr[j]
//             If sum == 0:
//                 length = j - i + 1
//                 maxLen = max(maxLen, length)
//     Return maxLen

// In main:
//     Call maxLenSubarrayWithZeroSum(arr)
//     Print result
// End
// ----------------------------------------------------------------------------------
