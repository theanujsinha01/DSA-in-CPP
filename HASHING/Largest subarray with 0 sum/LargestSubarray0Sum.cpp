#include <bits/stdc++.h>
using namespace std;

int maxLenSubarrayWithZeroSum(const vector<int>& arr) {
    unordered_map<int, int> sumMap; // To store the first occurrence of each sum
    int maxLen = 0;                 // To store the length of the largest subarray with 0 sum
    int cumSum = 0;                 // Cumulative sum

    for (int i = 0; i < arr.size(); ++i) {
        cumSum += arr[i];

        // Check if cumSum is 0, meaning we found a subarray from the start to i
        if (cumSum == 0) {
            maxLen = i + 1;
        }

        // If cumSum has been seen before, there exists a subarray with sum 0
        if (sumMap.find(cumSum) != sumMap.end()) {
            maxLen = max(maxLen, i - sumMap[cumSum]);
        } else {
            
            sumMap[cumSum] = i;
        }
    }

    return maxLen;
}

int main() {
    vector<int> arr = {1, 2, -2, 4, -4};
    cout << "Length of the largest subarray with 0 sum: " << maxLenSubarrayWithZeroSum(arr) << endl;
    return 0;
}
