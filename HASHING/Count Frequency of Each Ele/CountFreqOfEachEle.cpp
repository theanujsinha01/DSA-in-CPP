#include <bits/stdc++.h>
using namespace std;

unordered_map<int, int> countFrequency( vector<int>& arr) {
    unordered_map<int, int> frequencyMap; // To store frequency of each element

    // Count the frequency of each element in the array
    for (int i=0; i<arr.size(); i++) {
        frequencyMap[arr[i]]++;
    }

    return frequencyMap; 
}

int main() {
    vector<int> arr = {4, 5, 6, 4, 3, 5, 4, 2};

    unordered_map<int, int> frequencies = countFrequency(arr);

    cout << "Element frequencies:\n";
    for (auto it : frequencies) {
        cout << "Element " << it.first << ": " << it.second << " times\n";
    }

    return 0;
}
