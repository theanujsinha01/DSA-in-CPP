#include <bits/stdc++.h>
using namespace std;

vector<int> subarraySum(vector<int>& arr, int target) {
    int left = 0, sum = 0;
    vector<int> result;

    for (int right = 0; right < arr.size(); right++) {  
        sum += arr[right];  

        while (sum > target && left <= right) {  
            sum -= arr[left];
            left++;
        }

        if (sum == target) {
            return {left + 1, right + 1};  
        }
    }

    return {-1, -1};  
}

int main() {
    vector<int> arr = {1, 2, 3, 7, 5};
    int target = 12;
    
    vector<int> result = subarraySum(arr, target);
    
    for (int num : result) {
        cout << num << " ";
    }
}
// time complexity: O(n) where n is the size of the array
// space complexity: O(1) as we are using only a few variables for calculations


//.............................................................................
// Pseudocode to find a continuous subarray with given sum (target)

// Start

// Input: array arr, target sum
// Output: start and end indices of subarray with sum = target, else [-1, -1]

// Initialize left = 0, sum = 0

// For right from 0 to length of arr - 1:
//    Add arr[right] to sum
//    While sum > target and left <= right:
//       Subtract arr[left] from sum
//       Increment left by 1
//    If sum == target:
//       Return [left+1, right+1]  // 1-based indexing

// Return [-1, -1] if no such subarray found

// End
//.........................................................................
