#include <bits/stdc++.h>
using namespace std;

int countPairsWithSum(vector<int>&arr,int target) {
    int count = 0;
    int n = arr.size();

    // Use a nested loop to check all pairs
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] + arr[j] == target) {
                count++;
            }
        }
    }

    return count;
}

int main() {
    vector<int>arr = {1, 5, 7, -1, 5};
    int target = 6;
    int result = countPairsWithSum(arr, target);
    cout << "Number of pairs with sum " << target << ": " << result << endl;
    return 0;
}
// time complexity: O(n^2), where n is the size of the input array arr.
// space complexity: O(1), as we are using a constant amount of extra space for the count variable.

// ----------------------------------------------------------------------------------
// Pseudo code

// Start

// Input: array arr, integer target
// Set count = 0
// Set n = size of arr

// For i = 0 to n-1:
//     For j = i+1 to n-1:
//         If arr[i] + arr[j] == target:
//             count = count + 1

// Return count

// In main:
//     Input arr = {1, 5, 7, -1, 5}
//     Input target = 6
//     Call countPairsWithSum(arr, target) → result
//     Print result

// End
// ----------------------------------------------------------------------------------
