#include <bits/stdc++.h>
using namespace std;


void mergeArrays(int arr1[], int n1, int arr2[], int n2, int mergedarr[]) {
    int i = 0, j = 0, k = 0;

    // Merge elements from both arrays in sorted order
    while (i < n1 && j < n2) {
        if (arr1[i] <= arr2[j]) {
            mergedarr[k++] = arr1[i++];
        } else {
            mergedarr[k++] = arr2[j++];
        }
    }

    // Copy remaining elements of arr1
    while (i < n1) {
        mergedarr[k++] = arr1[i++];
    }

    // Copy remaining elements of arr2
    while (j < n2) {
        mergedarr[k++] = arr2[j++];
    }
}

int main() {
    int arr1[] = {1, 3, 5, 7};
    int arr2[] = {2, 4, 6, 8};
    int n1 = sizeof(arr1) / sizeof(arr1[0]);
    int n2 = sizeof(arr2) / sizeof(arr2[0]);
    int mergedarr[n1 + n2];

    mergeArrays(arr1, n1, arr2, n2, mergedarr);

    cout << "Merged array: ";
    for (int i = 0; i < n1 + n2; i++) {
        cout << mergedarr[i] << " ";
    }

    return 0;
}