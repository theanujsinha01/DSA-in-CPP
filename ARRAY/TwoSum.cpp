#include <bits/stdc++.h>
using namespace std;

void findTwoSum(vector<int>&arr, int target) {
    int n = arr.size();
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] + arr[j] == target) {
                cout << "Indices: " << i << " and " << j << endl;
                return; // Exit after finding one solution
            }
        }
    }
    cout << "No two numbers add up to the target." << endl;
}
int main() {
    vector<int>arr = {2, 7, 11, 15};
    int target = 13;
    findTwoSum(arr,target);

    return 0;
}
// Time Complexity: O(N^2)
// Space Complexity: O(1)

// ----------------------------------------------------------------------------------
// Start

// Input: array arr, integer target

// Function findTwoSum:
//     For i = 0 to n-1:
//         For j = i+1 to n-1:
//             If arr[i] + arr[j] == target:
//                 Print i and j
//                 Return (stop searching)

//     Print "No two numbers add up to the target."
// In main:
//     Call findTwoSum(arr, target)
// End
// ----------------------------------------------------------------------------------
