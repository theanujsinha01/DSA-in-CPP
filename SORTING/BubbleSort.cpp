#include <bits/stdc++.h>
using namespace std;

vector<int> bubbleSort(vector<int>& arr) {
    int n = arr.size();
    for (int i = 0; i < n; i++) { 
        for (int j = 0; j < n - 1; j++) { 
            if (arr[j] > arr[j + 1]) { 
              swap(arr[j],arr[j+1]);
            }
        }
    }

    return arr;


}

int main() {
    vector<int> arr = {64, 34, 25, 12, 22, 11, 90};

    vector<int> sortedArr = bubbleSort(arr);
    for ( auto it : sortedArr) {
        cout << it << " ";
    }
    return 0;
}
// Time Complexity: O(n^2) in all cases (best, average, worst)
// Space Complexity: O(1) as it sorts the array in place

// ----------------------------------------------------------------------------------
// pseudo code

// Start

// Input array arr
// n = size of arr

// For i from 0 to n-1:
//     For j from 0 to n-2:
//         If arr[j] > arr[j+1]:
//             Swap arr[j] and arr[j+1]

// Print sorted array

// End
// ----------------------------------------------------------------------------------