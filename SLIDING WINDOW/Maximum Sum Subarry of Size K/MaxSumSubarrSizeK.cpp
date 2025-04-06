#include <bits/stdc++.h>
using namespace std;

int maximumSumSubarray(int k, vector<int>& arr) {
    int start = 0;
    int end = start + k - 1;  
    int ans = INT_MIN;

    while (end < arr.size()) {  
        int currentSum = 0;
        for (int i = start; i <= end; i++) {
            currentSum += arr[i];
        }
        ans = max(ans, currentSum);
        start++;
        end++;
    }
    return ans;
}

int main() {
    vector<int> arr = {1, 2, 9, 4, 12, 3, 7, 8};
    int k = 3;

    int result = maximumSumSubarray(k, arr);
    cout << "Maximum sum of all subarrays of size " << k << " is: " << result << endl;
    return 0;
}
// time complexity: O(n*k) where n is the size of the array and k is the size of the window
// space complexity: O(1) as we are using only a few variables for calculations
