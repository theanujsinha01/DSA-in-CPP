#include <bits/stdc++.h>
using namespace std;

vector<int> findDuplicates(int arr[], int n) {

    unordered_set<int> seen; // To store seen numbers
    vector<int> duplicates;   // To store duplicates

    for (int i = 0; i < n; i++) {
        // If the number is already in the set, it's a duplicate
        if (seen.find(arr[i]) != seen.end()) {
            duplicates.push_back(arr[i]);
        } else {
            seen.insert(arr[i]); // Otherwise, insert it into the set
        }
    }
    
    return duplicates; 
}

int main() {
    int arr[] = {1, 2, 3, 4, 5, 2, 3, 6, 7, 1};
    int n = 10;

    vector<int> duplicates = findDuplicates(arr, n);

    cout << "Duplicate numbers are: ";
    for (int num : duplicates) {
        cout << num << " ";
    }
    return 0;
}