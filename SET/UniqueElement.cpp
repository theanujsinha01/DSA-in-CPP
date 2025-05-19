#include <bits/stdc++.h>
using namespace std;

// Function to count unique elements in an array using set
int countUniqueElements(const vector<int>& arr) {
    set<int> uniqueElements(arr.begin(), arr.end());
    return uniqueElements.size();
}

int main() {
    vector<int> arr = {1, 2, 2, 3, 3, 4, 5};
    int ans = countUniqueElements(arr);
    cout << "Number of unique elements: " << ans << endl;
    return 0;
}
// time complexity: O(n log n) where n is the size of the input array
// space complexity: O(n) where n is the size of the set

//...............................................................................
// Pseudocode for counting unique elements in an array

// Start

// Input: array arr

// Step 1: Create an empty set uniqueElements

// Step 2: Insert each element of arr into uniqueElements

// Step 3: Return the size of uniqueElements

// End
//...............................................................................
