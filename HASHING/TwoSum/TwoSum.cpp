#include <bits/stdc++.h>
using namespace std;

pair<int, int> twoSum(const vector<int>& arr, int target) {
    unordered_map<int, int> mp; // Map to store the element and its index

    for (int i = 0; i < arr.size(); i++) {
        int finding = target - arr[i]; // Find the complement of the current number

        // Check if the complement exists in the map
        if (mp.count(finding)) {
            return {mp[finding], i}; // Return indices of the pair
        }

        // Store the current number with its index
        mp[arr[i]] = i;
    }

    return {-1, -1}; // Return -1, -1 if no pair is found
}

int main() {
    int n, target;
    cout << "Enter the number of elements: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Enter the target sum: ";
    cin >> target;

    pair<int, int> result = twoSum(arr, target);
    if (result.first != -1) {
        cout << "Indices of the pair with the given sum: " << result.first << " and " << result.second << endl;
    } else {
        cout << "No pair exists with the given sum.\n";
    }

    return 0;
}
