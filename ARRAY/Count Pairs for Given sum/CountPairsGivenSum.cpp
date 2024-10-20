#include <bits/stdc++.h>
using namespace std;

int countPairsWithSum(int arr[], int n, int target) {
    unordered_set<int> numSet;  // To store the unique elements
    int count = 0;  

    for (int i = 0; i < n; i++) {
        int complement = target - arr[i];  

        // If complement is found in the set, a pair exists
        if (numSet.find(complement) != numSet.end()) {
            count++;
        }

        // Add the current number to the set
        numSet.insert(arr[i]);
    }

    return count;
}

int main() {
    int arr[] = {1, 5, 7, -1, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target = 6;

    int result = countPairsWithSum(arr, n, target);
    cout << "Number of pairs: " << result << endl;

    return 0;
}
