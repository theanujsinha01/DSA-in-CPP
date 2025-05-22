#include <bits/stdc++.h>
using namespace std;

int KthLargest(vector<int>&v, int k) {
    sort(v.begin(), v.end());
    int n = v.size();
    return v[n - k];

}
int KthSmallest(vector<int>&v, int k) {
    sort(v.begin(), v.end());
    return v[k - 1];
}

int main() {
    vector<int>arr = {1,2,3,4,5,6};
    int k = 2; // Example: Find 3rd smallest and largest
    int kthLargest = KthLargest(arr, k);
    int kthSmallest = KthSmallest(arr, k);
    cout << "Kth Largest: " << kthLargest << endl;
    cout << "Kth Smallest: " << kthSmallest << endl;
    return 0;
}
// Time Complexity: O(nlogn) for sorting
// Space Complexity: O(1) for sorting

// ----------------------------------------------------------------------------------
// Pseudo code

// Start

// Input: array v, integer k

// Function KthLargest:
//     Sort v in ascending order
//     Set n = size of v
//     Return v[n - k]

// Function KthSmallest:
//     Sort v in ascending order
//     Return v[k - 1]

// In main:
//     Input array arr = {1, 2, 3, 4, 5, 6}
//     Input k = 2

//     Call KthLargest(arr, k) → kthLargest
//     Call KthSmallest(arr, k) → kthSmallest

//     Print kthLargest
//     Print kthSmallest

// End
// ----------------------------------------------------------------------------------
