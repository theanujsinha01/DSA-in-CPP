#include<bits/stdc++.h>
using namespace std;

double findMaxAverage(vector<int>& nums, int k) {
    // SLIDING WINDOW, 2 POINTERS
    double res; // max average
    double currentMaximum; // current maximum average
    double sum = 0; // sum of k values
    int idx = 0;

    while(idx < k) {
        sum += nums[idx]; // add k elements
        idx++;
    }
    for(int i=1; i<=nums.size()-k; i++) {
        currentMaximum = sum / k; // calculate average
        res = max(res, currentMaximum); // update max average
        sum -= nums[i-1]; // remove leftmost element
        sum += nums[i+k-1]; // add rightmost element
    }

    return res;
}

int main(){
    vector<int> nums = {1,2,9,4,12,3,7,8};
    int k = 3;
    double result = findMaxAverage(nums, k);
    cout << "Maximum average of subarray size k is: " << result;
}

// time complexity: O(n)
// space complexity: O(1)

//...............................................................................
// Pseudocode for finding maximum average of subarray of size k

// Start

// Input: array nums, window size k
// Output: max_average (maximum average of any subarray of size k)

// Initialize sum = 0
// For i from 0 to k-1:
//    sum = sum + nums[i]

// max_average = sum / k

// For i from 1 to length(nums) - k:
//    sum = sum - nums[i-1] + nums[i+k-1]
//    current_average = sum / k
//    if current_average > max_average:
//       max_average = current_average

// Return max_average

// End
//...............................................................................
