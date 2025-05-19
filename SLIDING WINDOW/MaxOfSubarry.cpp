#include <bits/stdc++.h>
using namespace std;

vector<int> maxOfSubarrays(vector<int>& arr, int k) {

    int start = 0;
    int end = start + k - 1;  
    vector<int> ans;

    while (end < arr.size()) {  
        int maxElement = INT_MIN;
        for (int i = start; i <= end; i++) {
            maxElement = max(maxElement, arr[i]);
        }
        ans.push_back(maxElement);
        start++;
        end++;
    }
    return ans;
}

int main() {
    vector<int> arr = {1, 3, -1, -3, 5, 3, 6, 7};
    int k = 3;

    vector<int> result = maxOfSubarrays(arr, k);
    cout << "Maximum of each subarray of size " << k << " is: ";
    for (auto it : result) {
        cout << it << " ";
    }
    return 0;
}
// time complexity: O(n*k) where n is the size of the array and k is the size of the window
// space complexity: O(n) for the result array

//...............................................................................
// Pseudocode for finding maximum in every window of size k

// Start

// Input: array arr, window size k
// Output: list ans with max element in each window

// Initialize ans as empty list
// Initialize start = 0, end = k - 1

// While end < length of arr:
//    maxElement = very small number (e.g. -∞)
//    For i from start to end:
//       maxElement = max(maxElement, arr[i])
//    Add maxElement to ans
//    Increment start and end by 1

// Return ans

// End
//...............................................................................
