#include <bits/stdc++.h>
using namespace std;

vector<int> selectionSort(vector<int>& arr) {
    int n = arr.size(); 
    for (int i = 0; i < n - 1; i++) {
        int minIndex = i; // Assume the minimum is the first element of the 
        for (int j = i + 1; j < n; j++) { 
            if (arr[j] < arr[minIndex]) { // Find the index of the minimum element
                minIndex = j; // Update minIndex if a smaller element is found
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
// Time Complexity: O(n^2), where n is the number of elements in the array. The algorithm consists of two nested loops: the outer loop iterates through each element, and the inner loop finds the minimum element in the remaining unsorted portion of the array, leading to a quadratic time complexity.
// Space Complexity: O(1), as the sorting is done in place and no additional space is required for storing the sorted array. The algorithm only uses a constant amount of extra space for variables like minIndex and i, j.
