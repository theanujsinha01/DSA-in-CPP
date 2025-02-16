#include <bits/stdc++.h>
using namespace std;
//Kadane's Algo

int maxSubarraySum(int arr[], int n) {
    int maxSum = INT_MIN;  
    int currentSum = 0; 

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
