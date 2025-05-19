#include <bits/stdc++.h>
using namespace std;

vector<int> FirstNegativeInteger(vector<int>& arr, int k) {
    int start = 0;
    int end = start + k - 1;  
    vector<int> ans;

    while (end < arr.size()) {  
        bool found = false;
        for (int i = start; i <= end; i++) {
            if (arr[i] < 0) {
                ans.push_back(arr[i]);
                found = true;
                break;
            }
        }
        if (!found) ans.push_back(0); 
        start++;
        end++;
    }
    return ans;
}

int main() {
    vector<int> arr = {-8, 2, 3, -6, 10};
    int k = 2;
    
    vector<int> result = FirstNegativeInteger(arr, k);
    
    for (int num : result) {
        cout << num << " ";
    }
    return 0;
}
// time complexity: O(n*k) where n is the size of the array and k is the size of the window
// space complexity: O(n) for the result array


//...............................................................................
// Pseudocode for finding first negative integer in every window of size k

// Start

// Input: array arr, window size k
// Output: list ans with first negative number in each window (or 0 if none)

// Initialize ans as empty list
// Initialize start = 0, end = k - 1

// While end < length of arr:
//    found = false
//    For i from start to end:
//       If arr[i] < 0:
//          Add arr[i] to ans
//          found = true
//          Break loop
//    If not found:
//       Add 0 to ans
//    Increment start and end by 1

// Return ans

// End
//...............................................................................
