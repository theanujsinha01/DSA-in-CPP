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
// Time Complexity: O(n^2), where n is the number of elements in the array. The algorithm uses two nested loops to compare adjacent elements.
// Space Complexity: O(1), as it sorts the array in place and does not use any additional data structures that grow with input size.
