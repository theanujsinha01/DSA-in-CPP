#include <bits/stdc++.h>
using namespace std;
//Kadane's Algo

int maxSubarraySum(int arr[], int n) {
    int maxSum = INT_MIN;   // Initialize maxSum with the smallest integer
    int currentSum = 0; // Initialize currentSum to 0

    for (int i = 0; i < n; i++) {
        currentSum = currentSum + arr[i];  // Add current element to currentSum

        if (currentSum < 0) {
            currentSum = 0;  
        }

        maxSum = max(maxSum, currentSum);  
    }

    return maxSum;  // Return the maximum sum found
}

int main() {
    int n;

    cout << "Enter the size of the array: ";
    cin >> n;

    int arr[n];
    cout << "Enter elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int result = maxSubarraySum(arr, n);
    cout << "Maximum sum of a subarray is: " << result << endl;

    return 0;
}
