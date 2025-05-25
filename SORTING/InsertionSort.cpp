#include <bits/stdc++.h>
using namespace std;

vector<int> insertionSort(vector<int> arr) {
    int n = arr.size();

    for (int i = 1; i < n; i++) {
        int key = arr[i]; // current element
        int j = i - 1;

        // move bigger elements to the right
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }

        arr[j + 1] = key; // put key in the right place
    }

    return arr;
}

int main() {
   vector<int> arr = {12, 11, 13, 5, 6};
   vector<int> sortedArr = insertionSort(arr);

    for (auto it : sortedArr) {
        cout << it << " ";
    }
    return 0;
}
// Time Complexity: O(n^2) in the worst case (when the array is sorted in reverse order), O(n) in the best case (when the array is already sorted)
// Space Complexity: O(1) as it sorts the array in place

/*------------------------------------------------------------------------------
Start

For i = 1 to n-1:
    key = arr[i]
    j = i - 1
    While j >= 0 and arr[j] > key:
        arr[j + 1] = arr[j]
        j = j - 1
    arr[j + 1] = key

End
//-----------------------------------------------------------------------------*/