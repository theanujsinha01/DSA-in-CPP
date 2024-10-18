// PROBLEM :
// Find the Smallest Element in an Array

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

    int smallest = INT_MAX;

    // Loop to find the smallest element
    for (int i = 0; i < n; i++) { 
        if (arr[i] < smallest) {
            smallest = arr[i];
        }
    }

    cout << "The smallest element is: " << smallest << endl;

    return 0;
}