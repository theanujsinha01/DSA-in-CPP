#include <iostream>
using namespace std;

// Function to reverse a portion of the array
void reverse(int arr[], int start, int end) {
    while (start < end) {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}

// Function to rotate the array by k positions
void rotateArray(int arr[], int n, int k) {
    k = k % n; // Handle cases where k is greater than n
    if (k == 0) return; // No rotation needed if k is 0

    // Step 1: Reverse the entire array
    reverse(arr, 0, n - 1);
    // Step 2: Reverse the first k elements
    reverse(arr, 0, k - 1);
    // Step 3: Reverse the remaining n - k elements
    reverse(arr, k, n - 1);
}


int main() {
    int n, k;

    cout << "Enter the size of the array: ";
    cin >> n;

    int arr[n];
    cout << "Enter elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Enter the number of positions to rotate: ";
    cin >> k;

    rotateArray(arr, n, k);

    cout << "Array after rotation: ";
    for(auto it : arr){
        cout<<it<<" ";
    }

    return 0;
}
