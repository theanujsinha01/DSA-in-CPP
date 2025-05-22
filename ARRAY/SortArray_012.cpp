#include <bits/stdc++.h>
using namespace std;

vector<int> sortArray(vector<int>& arr) { 
    int low = 0;   
    int mid = 0;    
    int high = arr.size() - 1; 

    while (mid <= high) {
        if (arr[mid] == 0) {
            swap(arr[low], arr[mid]);
            low++;
            mid++;
        } 
        else if (arr[mid] == 2) {
            swap(arr[mid], arr[high]);
            high--;
        }
        else { 
             mid++;
        }
    }
    return arr;
}

int main() {
    vector<int> arr = {0, 1, 2, 0, 1, 2};
    vector<int> ans = sortArray(arr);
    
    cout << "Sorted array: ";
    for (auto it : ans) {
        cout << it << " ";
    }
    return 0;
}
// Time Complexity: O(N)
// Space Complexity: O(1)

// ----------------------------------------------------------------------------------
// Pseudo code

// Start

// Input: array arr with elements 0, 1, and 2

// Function sortArray:
//     Set low = 0, mid = 0, high = size of arr - 1

//     While mid <= high:
//         If arr[mid] == 0:
//             Swap arr[low] and arr[mid]
//             low = low + 1
//             mid = mid + 1
//         Else if arr[mid] == 2:
//             Swap arr[mid] and arr[high]
//             high = high - 1
//         Else: 
//             mid = mid + 1
//     Return arr

// In main:
//     Call sortArray(arr) 
//     Print ans
// End
// ----------------------------------------------------------------------------------
