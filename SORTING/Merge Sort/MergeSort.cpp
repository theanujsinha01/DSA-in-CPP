#include <bits/stdc++.h>
using namespace std;

void merge(int arr[], int start, int mid, int end) {

    int n = end - start + 1;
    int output[n];
    int i = start, j = mid + 1, k = 0;

    while (i <= mid && j <= end) {
        if (arr[i] < arr[j]) output[k++] = arr[i++];
        else output[k++] = arr[j++];
    }

    while (i <= mid) output[k++] = arr[i++];
    while (j <= end) output[k++] = arr[j++];
    for (int i = start, k = 0; i <= end; i++, k++) arr[i] = output[k];

}

void mergeSort(int arr[], int start, int end) {
    if (start < end) {
        int mid = (start + end) / 2;
        mergeSort(arr, start, mid);
        mergeSort(arr, mid + 1, end);
        merge(arr, start, mid, end);
    }
}

int main() {
    int arr[] = {5, 3, 8, 4, 2, 7, 1, 6};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Unsorted array: ";
    for (int i = 0; i < n; i++) cout << arr[i] << " ";
    cout << endl;

    mergeSort(arr, 0, n - 1);

    cout << "Sorted array: ";
    for (int i = 0; i < n; i++) cout << arr[i] << " ";
    cout << endl;

    return 0;
}
