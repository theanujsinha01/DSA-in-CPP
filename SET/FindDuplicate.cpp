#include <bits/stdc++.h>
using namespace std;

set<int> findDuplicates(vector<int>& arr) {
    set<int> seen, duplicates;
    for (auto it : arr) {
        if (seen.count(it)) {
            duplicates.insert(it);  // Already seen → it's a duplicate
        } else {
            seen.insert(it);       // First time seeing this number
        }
    }
    return duplicates;
}

int main() {
    vector<int> arr = {1, 2, 3, 4, 5, 1, 2, 3};
    set<int> ans = findDuplicates(arr);
    cout << "Duplicate elements: ";
    for (int x : ans) {
        cout << x << " ";
    }
    return 0;
}
// time complexity: O(n), space complexity: O(n)
// This code finds duplicate elements in an array using a set.

//..............................................................................
// Pseudocode for finding duplicates in an array

// Start

// Input: array arr with size n

// Step 1: Create empty set seen
// Step 2: Create empty set duplicates

// Step 3: For each element x in arr:
//   If x is in seen:
//     Add x to duplicates
//   Else:
//     Add x to seen

// Step 4: Return duplicates

// End
//..............................................................................
