#include <bits/stdc++.h>
using namespace std;

vector<int> mergeSortedArrays(vector<int>& a, vector<int>& b) {
    int i = 0, j = 0;
    vector<int> result;

    while (i < a.size() && j < b.size()) {
        if (a[i] < b[j]) {
            result.push_back(a[i++]);
            
        } else {
            result.push_back(b[j++]);
            
        }
    }

    // Add remaining elements
    while (i < a.size()) {
        result.push_back(a[i++]);
    }
    while (j < b.size()) {
        result.push_back(b[j++]);
    }

    return result;
}

int main() {
    vector<int> arr1 = {1, 3, 5, 7};
    vector<int> arr2 = {2, 4, 6, 8};

    vector<int> merged = mergeSortedArrays(arr1, arr2);

    cout << "Merged Array: ";
    for (int x : merged) {
        cout << x << " ";
    }

    return 0;
}

