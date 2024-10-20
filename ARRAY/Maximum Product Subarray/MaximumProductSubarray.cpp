#include <bits/stdc++.h>
using namespace std;

int maxProductSubarray(int arr[], int n) {
    int maxProduct = arr[0];  
    int minProduct = arr[0];  
    int result = arr[0];      

    for (int i = 1; i < n; i++) {
        // If the current number is negative, swap max and min
        if (arr[i] < 0) {
            swap(maxProduct, minProduct);
        }

        // Update maxProduct and minProduct
        maxProduct = max(arr[i], maxProduct * arr[i]);  
        minProduct = min(arr[i], minProduct * arr[i]); 

        result = max(result, maxProduct);
    }

    return result;
}

int main() {
    int arr[] = {2, -100, 2, 4};  
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Maximum product subarray: " << maxProductSubarray(arr, n) << endl;

    return 0;
}
