// PROBLEM :
// Find the  Second Smallest Element in an Array

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

    int mn = arr[0], secondMin = INT_MAX;

    for (int i = 0; i < n; i++) {
       mn = min(mn, arr[i]);
    }
    for (int i = 0; i < n; i++) {
        if (arr[i] != mn) {
            secondMin = min(secondMin, arr[i]);
        }
    }

    if (secondMin == INT_MAX) {
        cout << "There is no second smallest element." << endl;
    } else {
        cout << "The second smallest element is: " << secondMin << endl;
    }

    return 0;
}
