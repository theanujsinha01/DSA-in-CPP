#include <bits/stdc++.h>
using namespace std;

vector<int> selectionSort(vector<int>& arr) {
    int n = arr.size(); 
    for (int i = 0; i < n - 1; i++) {
        int minVal = arr[i];
        int minIndex = i;

        for (int j = i + 1; j < n; j++) {
            if (arr[j] < minVal) {
                minVal = arr[j];
                minIndex = j;
            }
        }

        swap(arr[i], arr[minIndex]);
    }
    return arr; 
}

int main() {
    vector<int> arr = {10, 6, 11, 9, 7};
    vector<int> ans = selectionSort(arr);
    for (auto it : ans) cout << it << " ";
    return 0;
}
// Time Complexity: O(n^2)
// Space Complexity: O(1)
// ----------------------------------------------------------------------------------
// pseudo code

// Start

// Input array arr
// n = size of arr

// For i from 0 to n-2:
//     minVal = arr[i]
//     minIndex = i

//     For j from i+1 to n-1:
//         If arr[j] < minVal:
//             minVal = arr[j]
//             minIndex = j

//     Swap arr[i] and arr[minIndex]

// Print sorted array

// End
// ----------------------------------------------------------------------------------