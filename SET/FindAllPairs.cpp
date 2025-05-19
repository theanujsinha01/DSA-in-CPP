#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> allPairs(int x, vector<int> &arr1) {
    set<int> st;
    set<pair<int, int>> uniquePairs;
    for (int i = 0; i < arr1.size(); i++) {
        int finding = x - arr1[i];
        if (st.count(finding)) {
            uniquePairs.insert({min(arr1[i], finding), max(arr1[i], finding)});
        }
        st.insert(arr1[i]);
    }
    vector<vector<int>> ans;
    for (auto it : uniquePairs) {
        ans.push_back({it.first, it.second});
    }
    return ans;
}

int main() {
    vector<int> arr1 = {1, 2, 3, 4, 5};
    int x = 5;
    vector<vector<int>> ans = allPairs(x, arr1);
    cout << "All pairs with sum " << x << ":\n";
    for (auto pair : ans) {
        cout << "(" << pair[0] << ", " << pair[1] << ")\n";
    }
    return 0;
}
// time complexity: O(n)
// space complexity: O(n)

//..............................................................................
// Pseudocode for finding all pairs with sum x

// Start

// Input: integer x, array arr1 with size n

// Step 1: Create empty set st
// Step 2: Create empty set uniquePairs

// Step 3: For i from 0 to n-1:
//   finding = x - arr1[i]
//   If finding is in set st:
//     pair = (min(arr1[i], finding), max(arr1[i], finding))
//     Add pair to uniquePairs
//   Add arr1[i] to set st

// Step 4: Create empty list ans

// Step 5: For each pair in uniquePairs:
//   Add pair to ans

// Step 6: Return ans

// End
//..............................................................................
