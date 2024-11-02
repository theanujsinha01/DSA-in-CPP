#include <bits/stdc++.h>
using namespace std;

bool twoSum(const vector<int>& arr, int target) {
    unordered_map<int, int> mp;
    for (int i = 0; i < arr.size(); i++) {
         mp[arr[i]]++;
    }
    
    
    for (int i = 0; i < arr.size(); i++) {
        int finding = target - arr[i];
        
        // Check if the complement already exists in the map
        if (mp.find(finding) != mp.end()) {
            return true;
        }
        
    }
    
    return false;
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

    if (twoSum(arr, target)) {
        cout << "There exists a pair with the given sum.\n";
    } else {
        cout << "No pair exists with the given sum.\n";
    }

    return 0;
}
