#include <bits/stdc++.h>
using namespace std;

set<int> remove_duplicates(const vector<int>& arr) {
    set<int> unique_elements(arr.begin(), arr.end());
    return unique_elements;
}

int main() {
    vector<int> arr = {1, 2, 2, 3, 3, 4};
    set<int> ans = remove_duplicates(arr);
    for (int x : ans) {
        cout << x << " ";
    }
    return 0;
}
// time complexity: O(n log n) where n is the size of the input array
// space complexity: O(n) where n is the size of the set

//...............................................................................
// Pseudocode for removing duplicates from an array

// Start

// Input: array arr

// Step 1: Create an empty set unique_elements

// Step 2: For each element in arr:
//     Insert the element into unique_elements (sets only keep unique values)

// Step 3: Return unique_elements

// End
//...............................................................................