#include <iostream>
using namespace std;

int maxProductSubarray(int arr[], int n) {
    int maxProd = arr[0], minProd = arr[0], result = arr[0];

    for (int i = 1; i < n; i++) {
        if (arr[i] < 0) {
            swap(maxProd, minProd);  // Swap if negative
        }

        maxProd = max(arr[i], maxProd * arr[i]);  // Update max
        minProd = min(arr[i], minProd * arr[i]);  // Update min

        result = max(result, maxProd);  // Store the max result
    }

    return result;
}

int main() {
    int arr[] = {2, -100, 2, 4};
    int n = 4;

    cout << "Maximum product: " << maxProductSubarray(arr, n) << endl;

    return 0;
}
