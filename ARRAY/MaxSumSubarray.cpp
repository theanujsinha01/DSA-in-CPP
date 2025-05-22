#include <bits/stdc++.h>
using namespace std;
//Kadane's Algo

int maxSubarraySum(vector<int>& arr) {
    int maxSum = INT_MIN;  
    int currentSum = 0;
    int n = arr.size();

    for (int i = 0; i < n; i++) {
        currentSum = currentSum + arr[i];
        maxSum = max(maxSum, currentSum); 

        if (currentSum < 0) {
            currentSum = 0;  
        }
    }

    return maxSum; 
}

int main() {

    vector<int> arr = {1, -2, 3, 4, -1, 2, 1, -5, 4};
    int result = maxSubarraySum(arr);
    cout << "Maximum sum of a subarray is: " << result << endl;
    return 0;
}
// time complexity: O(n), where n is the size of the input array arr.
// space complexity: O(1), as we are using a constant amount of extra space for the currentSum and maxSum variables.

// ----------------------------------------------------------------------------------
// Pseudo code

// Start

// Input: array arr

// Function maxSubarraySum:
//     Set maxSum = very small number
//     Set currentSum = 0
//     Set n = size of arr

//     For i = 0 to n-1:
//         currentSum = currentSum + arr[i]
//         maxSum = max(maxSum, currentSum)
//         If currentSum < 0:
//             currentSum = 0

//     Return maxSum

// In main:
//     Input array arr = {1, -2, 3, 4, -1, 2, 1, -5, 4}
//     Call maxSubarraySum(arr) → result
//     Print result

// End
// ----------------------------------------------------------------------------------
