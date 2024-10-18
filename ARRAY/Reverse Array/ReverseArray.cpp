#include <bits/stdc++.h>
using namespace std;

void reverseArray(int arr[], int n) {
    int start = 0;
    int end = n - 1;

    while (start < end) {
        
        swap(arr[start], arr[end]);
        start ++;
        end--;
    }
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int n = 5;

    cout << "Original array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    reverseArray(arr, n);

    cout << "Reversed array: ";
    for ( auto it : arr) {
        cout<<it<<" ";
    }
    return 0;
}
