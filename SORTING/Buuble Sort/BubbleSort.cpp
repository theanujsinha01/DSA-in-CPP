#include <bits/stdc++.h>
using namespace std;

void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n; i++) { 
        for (int j = 0; j < n - 1; j++) { 
            if (arr[j] > arr[j + 1]) { 
              swap(arr[j],arr[j+1]);
            }
        }
    }
}

int main() {
    int arr[] = {5, 4, 3, 2, 1};
    int n = 5;

    cout << "Unsorted array: ";
    for ( auto it : arr) {
        cout << it << " ";
    }
    cout << endl;

    bubbleSort(arr, n); 

    cout << "Sorted array: ";
    for ( auto it : arr) {
        cout << it << " ";
    }
    cout << endl;

    return 0;
}
