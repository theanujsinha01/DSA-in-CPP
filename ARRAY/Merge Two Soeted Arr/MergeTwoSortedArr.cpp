#include <bits/stdc++.h>
using namespace std;

void mergeArrays(int arr1[], int n, int arr2[], int m) {
    int i = n - 1;  // Pointer for the last element of arr1
    int j = 0;      // Pointer for the first element of arr2

    // Swap elements if arr1[i] > arr2[j]
    while (i >= 0 && j < m) {
        if (arr1[i] > arr2[j]) {
            swap(arr1[i], arr2[j]);
        }
        i--;
        j++;
    }

    // Sort both arrays to keep them sorted
    sort(arr1, arr1 + n);
    sort(arr2, arr2 + m);
}

int main() {
    int arr1[] = {1, 3, 5, 7};
    int arr2[] = {2, 4, 6, 8};
    int n = sizeof(arr1) / sizeof(arr1[0]);
    int m = sizeof(arr2) / sizeof(arr2[0]);

    mergeArrays(arr1, n, arr2, m);

    // Print both arrays
    cout << "Array 1 and 2: "<<endl;
    for (int i = 0; i < n; i++) {
        cout << arr1[i] << " ";
    }
    for (int i = 0; i < m; i++) {
        cout << arr2[i] << " ";
    }
    cout << endl;

    return 0;
}
