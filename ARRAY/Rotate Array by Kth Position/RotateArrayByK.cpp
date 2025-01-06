#include <bits/stdc++.h>
using namespace std;

void rotateArray(int arr[], int n, int k) {
    k = k % n; 
    if (k == 0) return;
      
    reverse(arr, arr + n); 
    reverse(arr, arr + k);  
    reverse(arr + k, arr + n);         
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
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
