#include <bits/stdc++.h>
using namespace std;

int findMajorityElement(vector<int>arr) {
    int n = arr.size();
    sort(arr.begin(),arr.end()); // Sort the array
    return arr[n / 2];
}
int main() {
    vector<int>arr = {2, 2, 1, 1, 2, 2, 2};
    int result = findMajorityElement(arr);
    cout << "Majority element: " << result << endl;
    return 0;
}
// time complexity: O(n log n), where n is the size of the input array arr.
// space complexity: O(1), as we are using a constant amount of extra space for the result variable.

// ----------------------------------------------------------------------------------
// Pseudo code

// Start
// Input: array arr

// Function findMajorityElement:
//     Set n = size of arr
//     Sort the array arr
//     Return element at index n / 2

// In main:
//     Call findMajorityElement(arr)
//     Print the result
// End
// ----------------------------------------------------------------------------------
