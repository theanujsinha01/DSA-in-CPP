#include <bits/stdc++.h>
using namespace std;

set<int> union_sets(set<int> s1, set<int> s2) {
    set<int> result = s1;
    result.insert(s2.begin(), s2.end());
    return result;
}

int main() {
    set<int> s1 = {1, 2, 3};
    set<int> s2 = {3, 4, 5};
    set<int> ans = union_sets(s1, s2);
    for (auto it : ans) {
        cout << it << " ";
    }
    return 0;
}
// time complexity: O(n + m) where n and m are the sizes of the two sets
// space complexity: O(n) where n is the size of the result set

//...............................................................................
// Pseudocode for union of two sets

// Start

// Input: sets s1 and s2

// Step 1: Create a new set result and copy all elements of s1 into it

// Step 2: Insert all elements of s2 into result (duplicates ignored automatically)

// Step 3: Return result

// End
//...............................................................................
