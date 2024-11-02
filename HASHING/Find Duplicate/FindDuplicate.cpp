#include <bits/stdc++.h>
using namespace std;

vector<int> findDuplicates(const vector<int>& arr) {
    unordered_map<int, int> mp; 
    vector<int> duplicates;   

    // Count the frequency of each element
    for (int i=0; i<arr.size(); i++) {
        mp[arr[i]]++;

        if (mp[arr[i]] > 1) {
            duplicates.push_back(arr[i]); // Add to duplicates if count > 1
        }

    }

    return duplicates; 
}

int main() {
    vector<int> arr = {1, 2, 3, 4, 5, 2, 3, 6, 7, 8, 4};

    vector<int> duplicates = findDuplicates(arr);

    cout << "Duplicate elements are: ";
    for (int num : duplicates) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
