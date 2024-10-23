#include <bits/stdc++.h>
using namespace std;

int partition(int arr[], int left, int right) {
    int pivot = arr[left]; // Choosing the first element as pivot
    int i = left; // Index of smaller element

    for (int j = left+1; j <= right; j++) {
        // If current element is smaller than or equal to pivot
        if (arr[j] <= pivot) {
            i++; // Increment index of smaller element
            swap(arr[i], arr[j]); // Swap current element with the element at i
        }
    }
    swap(arr[i], arr[left]); // Place pivot in the correct position
    return i; // Return the index of the pivot
}


void quickSort(int arr[], int left, int right) {
    if (left < right) {
        int pi = partition(arr, left, right); // Partitioning index

        // Recursively sort elements before and after partition
        quickSort(arr, left, pi - 1);
        quickSort(arr, pi + 1, right);
    }
}

int main() {
    int arr[] = {5, 4, 3, 2, 1};
    int n = 5  ;

    cout << "Unsorted array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " "; 
    }
    cout << endl;

    quickSort(arr, 0, n - 1); 

    cout << "Sorted array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " "; 
    }
    cout << endl;

    return 0;
}
