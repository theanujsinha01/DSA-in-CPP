#include <bits/stdc++.h>
using namespace std;

vector<int> selectionSort(vector<int>& arr) {
    int n = arr.size(); 
  for (int i = 0; i < arr.size(); i++)
    for (int j = i + 1; j < arr.size(); j++)
        if (arr[j] < arr[i])
            swap(arr[i], arr[j]);
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
/*---------------------------------------------------------------------------------
Start

For i = 0 to n-2:
    minIndex = i
    For j = i+1 to n-1:
        If arr[j] < arr[minIndex]:
            minIndex = j
    Swap arr[i] and arr[minIndex]

Print the sorted array

End
--------------------------------------------------------------------------------*/