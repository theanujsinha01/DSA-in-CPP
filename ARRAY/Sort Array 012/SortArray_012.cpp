#include <bits/stdc++.h>
using namespace std;

void sortArray(int arr[], int n) {
    int low = 0;   
    int mid = 0;    
    int high = n - 1; 

    while (mid <= high) {
        if (arr[mid] == 0) {
            // If the current element is 0, swap with low pointer
            swap(arr[low], arr[mid]);
            low++; 
            mid++; 
        } else if (arr[mid] == 1) {
            // If the current element is 1, just move the mid pointer
            mid++;
        } else {
            // If the current element is 2, swap with high pointer
            swap(arr[mid], arr[high]);
            high--; 
        }
    }
}

int main() {
    int arr[] = {0, 1, 2, 0, 1, 2, 1, 0};
    int n = 8;

    sortArray(arr, n);

    cout << "Sorted array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
  
    return 0;
}