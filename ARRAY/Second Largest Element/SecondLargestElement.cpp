// PROBLEM :
// Find the  Second Largest Element in an Array


#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;
    int arr[n];

    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int mx = arr[0], secondMax = INT_MIN;

    // Loop to find the max element
    for (int i = 1; i < n; i++) {
        mx = max(mx, arr[i]);
    }

    // Loop to find the second max element
    for (int i = 0; i < n; i++) {
        if (arr[i] != mx) {
            secondMax = max(secondMax, arr[i]);
        }
    }

    if (secondMax == INT_MIN) {
        cout << "Second Largest Element does not exist" << endl;
    } else {
        cout << "Second Largest Element is: " << secondMax << endl;
    }

    return 0;
}

