#include <bits/stdc++.h>
using namespace std;
void findDuplicates(int arr[], int n) {
    set<int> uniqueElements;
    set<int> duplicates;

    for (int i = 0; i < n; i++) {
        if (uniqueElements.count(arr[i])) {
            // Element already exists, it's a duplicate
            duplicates.insert(arr[i]);
        } 
            // Add element to the set
            uniqueElements.insert(arr[i]);
        
    }

    // Print duplicates
    if (duplicates.empty()) {
        cout << "No duplicates found." << endl;
    } else {
        cout << "Duplicates: ";
        for (int val : duplicates) {
            cout << val << " ";
        }
        cout << endl;
    }
}

int main() {
    int arr[] = {1, 2, 3, 4, 2};
    int n = sizeof(arr) / sizeof(arr[0]);

    findDuplicates(arr, n);

    return 0;
}