#include <bits/stdc++.h>
using namespace std;

vector<int> findDuplicates(vector<int>& arr) {
    unordered_map<int, int> mp; 
    vector<int> duplicates;   

    // Count the frequency of each element
    for (auto it : arr) {
        mp[it]++; // Increment the count of the element
    }

    // Find elements with frequency > 1
    for (auto it : mp) {
        if (it.second > 1) {
            duplicates.push_back(it.first); // Add to duplicates
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
