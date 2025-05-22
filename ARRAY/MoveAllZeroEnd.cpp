#include <bits/stdc++.h>
using namespace std;

vector<int>MoveAllZeroEnd(vector<int>& arr) {
    int n = arr.size();
    vector<int> temp(n);
    int index = 0;

    for (int i = 0; i < n; i++) {
        if (arr[i] != 0) {
            temp[index++] = arr[i];
        }
    }

    for (int i = 0; i < n; i++) {
        if (arr[i] == 0) {
            temp[index++] = arr[i];
        }
    }

    // Copy temp array back to original array
    for (int i = 0; i < n; i++) {
        arr[i] = temp[i];
    }
    return arr;
}
int main() {
   vector<int> arr = {0, 8, 4, 0, 2, 7, 0, 6};
   vector<int>ans =  MoveAllZeroEnd(arr);

    cout << "Array after rearranging: ";
    for(auto it : ans){
        cout<<it<<" ";
    }
    return 0;
}
// Time Complexity: O(n), where n is the size of the array.
// Space Complexity: O(n), where n is the size of the array.

// ----------------------------------------------------------------------------------
// Pseudo code

// Start

// Input: array arr

// Function MoveAllZeroEnd:
//     Set n = size of arr
//     Create temp array of size n
//     Set index = 0

//     For i = 0 to n-1:
//         If arr[i] != 0:
//             temp[index] = arr[i]
//             index = index + 1

//     For i = 0 to n-1:
//         If arr[i] == 0:
//             temp[index] = arr[i]
//             index = index + 1

//     For i = 0 to n-1:
//         arr[i] = temp[i]

//     Return arr

// In main:
//     Input arr = {0, 8, 4, 0, 2, 7, 0, 6}
//     Call MoveAllZeroEnd(arr) → ans
//     Print ans

// End
// ----------------------------------------------------------------------------------
