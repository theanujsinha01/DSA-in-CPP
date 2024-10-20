#include <bits/stdc++.h>
using namespace std;

void findTwoNumbersWithSum(int arr[], int n, int target) {
     set<int> numSet; 

    for (int i = 0; i < n; i++) {
        int complement = target - arr[i];

        // Check if the complement is already in the map
        if (numSet.find(complement) != numSet.end()) {
            cout << "Pair found: " << arr[i] << " and " << complement << endl;
            return;
        }

        // Add the current number to the set
        numSet.insert(arr[i]);
    }

    cout << "No pair found" << endl;
}

int main() {
    int arr[] = {2, 7, 11, 15};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target = 13;

    findTwoNumbersWithSum(arr, n, target);
    return 0;
}
