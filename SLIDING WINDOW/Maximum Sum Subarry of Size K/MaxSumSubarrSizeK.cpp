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
