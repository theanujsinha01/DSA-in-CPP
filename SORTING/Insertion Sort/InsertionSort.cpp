#include <bits/stdc++.h>
using namespace std;

void insertionSort(int arr[], int n) {

    for (int i = 1; i < n; i++) { // Start from the second element
        int key = arr[i]; // Element to be inserted
        int j = i - 1;
 
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j]; // Shift element to the right
            j--;
        }
        arr[j + 1] = key; // Place key at the correct position
    }
}

int main() {
    int arr[] = {5, 4, 3, 2, 1}; 
    int n = 5;

    cout << "Unsorted array: ";
    for (auto it : arr) {
        cout << it << " ";
    }
    cout << endl;

    insertionSort(arr, n);

    cout << "Sorted array: ";
    for (auto it : arr) {
        cout << it << " ";
    }
    cout << endl;

    return 0;
}
