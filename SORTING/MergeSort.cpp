#include <bits/stdc++.h>
using namespace std;

vector<int>merge(vector<int>& arr, int start, int end) {
    // Merge two sorted halves of the array
    vector<int> output;
    int mid = (start + end) / 2; 
    int i = start, j = mid + 1;

    while (i <= mid && j <= end) {
        if (arr[i] < arr[j]){
            output.push_back(arr[i++]);
        }
        else{
            output.push_back(arr[j++]);
        } 
    }

    while (i <= mid) output.push_back(arr[i++]);
    while (j <= end) output.push_back(arr[j++]);
    for(int i = 0; i < output.size(); i++) {
        arr[start + i] = output[i]; 
    }; 
    return arr; 
}

vector<int> mergeSort(vector<int>& arr, int start, int end) {
    if (start < end) {
        int mid = (start + end) / 2;
        mergeSort(arr, start, mid);
        mergeSort(arr, mid + 1, end);
        merge(arr, start, end);
    }
    return arr;
}

int main() {
    
    vector<int> arr = {10,6,11,9,7};
    vector<int> ans = mergeSort(arr, 0, arr.size() - 1);
    for (auto it : ans) cout << it << " ";
    return 0;
}
// Time Complexity: O(n log n) in all cases (best, average, worst)
// Space Complexity: O(n) due to the temporary array used for merging

// ----------------------------------------------------------------------------------
// pseudo code

// Start

// Input array arr
// n = size of arr

// Call mergeSort(arr, 0, n-1)

// Function mergeSort(arr, start, end):
//     If start >= end:
//         return

//     mid = (start + end) / 2

//     mergeSort(arr, start, mid)
//     mergeSort(arr, mid + 1, end)

//     merge(arr, start, mid, end)

// Function merge(arr, start, mid, end):
//     Create empty list output
//     i = start
//     j = mid + 1

//     While i <= mid and j <= end:
//         If arr[i] < arr[j]:
//             Append arr[i] to output
//             i = i + 1
//         Else:
//             Append arr[j] to output
//             j = j + 1

//     While i <= mid:
//         Append arr[i] to output
//         i = i + 1

//     While j <= end:
//         Append arr[j] to output
//         j = j + 1

//     For k from 0 to length(output) - 1:
//         arr[start + k] = output[k]

// Print sorted array

// End
// ----------------------------------------------------------------------------------