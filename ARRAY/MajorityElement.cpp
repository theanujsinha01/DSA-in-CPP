#include <bits/stdc++.h>
using namespace std;

int findMajorityElement(vector<int>arr, int n) {
    sort(arr.begin(),arr.end()); // Sort the array
    return arr[n / 2];
}
int main() {
    vector<int>arr = {2, 2, 1, 1, 2, 2, 2};
    int n = arr.size();
    int result = findMajorityElement(arr, n);
    cout << "Majority element: " << result << endl;

    return 0;
}
// time complexity: O(n log n), where n is the size of the input array arr.
// space complexity: O(1), as we are using a constant amount of extra space for the result variable.

// ----------------------------------------------------------------------------------
// Pseudo code

// Start

// Input: array arr and size n

// Function findMajorityElement:
//     Sort the array arr
//     Return element at index n / 2

// In main:
//     Input array arr = {2, 2, 1, 1, 2, 2, 2}
//     Set n = size of arr
//     Call findMajorityElement(arr, n)
//     Print the result

// End
// ----------------------------------------------------------------------------------
