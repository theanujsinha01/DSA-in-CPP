#include <bits/stdc++.h>
using namespace std;

pair<int, int> twoSum(const vector<int>& arr, int target) {
    unordered_map<int, int> mp; 

    for (int i = 0; i < arr.size(); i++) {
        int finding = target - arr[i]; 

        if (mp.count(finding)) {
            return {mp[finding], i}; 
        }
        mp[arr[i]] = i;
    }
    return {-1, -1}; // Return -1, -1 if no pair is found
}

int main() {
     
    vector<int>arr = {2, 7, 11, 15};
    int target = 9;
    pair<int, int> result = twoSum(arr, target);
    if (result.first != -1) {
        cout << "Indices of the two numbers that add up to " << target << " are: " 
             << result.first << " and " << result.second << endl;
    } else {
        cout << "No two numbers add up to " << target << endl;
    }
    return 0;
}
// time complexity: O(n) where n is the size of the array
// space complexity: O(n) for the map storing indices of elements

//...............................................................................
// Pseudocode to find two indices in array whose elements sum to target

// Start

// Input: array arr, integer target
// Output: pair of indices (i, j) where arr[i] + arr[j] = target, or (-1, -1) if none

// Create empty map mp to store element -> index

// For i from 0 to length of arr - 1:
//    finding = target - arr[i]
//    If finding is in mp:
//       Return (mp[finding], i)
//    Else:
//       Store mp[arr[i]] = i

// Return (-1, -1)  // no pair found

// End
//...............................................................................
