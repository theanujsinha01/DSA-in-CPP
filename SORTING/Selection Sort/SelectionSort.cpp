#include <bits/stdc++.h>
using namespace std;

void selectionSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int minIndex = i; // Assume the minimum is the first element of the unsorted part
        for (int j = i + 1; j < n; j++) { 
            if (arr[j] < arr[minIndex]) { // Find the index of the minimum element
                minIndex = j; // Update minIndex if a smaller element is found
            }
        }
       
        swap(arr[i], arr[minIndex]);
    }
}

int main() {
    int arr[] = {5, 4, 3, 2, 1};
    int n =5;

    cout << "Unsorted array: ";
    for (auto it : arr) {
        cout << it << " ";
    }
    cout << endl;

    selectionSort(arr, n); 
    
    cout << "Sorted array: ";
    for (auto it : arr) {
        cout << it << " ";
    }
    cout << endl;

    return 0;
}
