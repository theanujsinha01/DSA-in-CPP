#include <bits/stdc++.h>
using namespace std;

int maxProductOfThree(int arr[], int n) {
    // Sort the array
    sort(arr, arr + n);

    int maxProduct = max((arr[0] * arr[1] * arr[n - 1]), (arr[n - 1] * arr[n - 2] * arr[n - 3]));

    return maxProduct;
}

int main() {
    int arr[] = {-10, -10, 5, 2};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Maximum product of three numbers is: " << maxProductOfThree(arr, n) << endl;

    return 0;
}
