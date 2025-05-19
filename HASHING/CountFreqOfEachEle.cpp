#include <bits/stdc++.h>
using namespace std;

map<int, int> countFrequency(vector<int>& arr) {
    map<int, int> freq;
    for (auto x : arr) freq[x]++;
    return freq;
}

int main() {
    vector<int> arr = {1, 2, 2, 3, 3, 3};
    map<int, int> ans = countFrequency(arr);
    cout << "Frequency of each element:\n";
    for (auto p : ans) {
        cout << p.first << ": " << p.second << endl;
    }
    return 0;
}

// time complexity: O(n) where n is the size of the array
// space complexity: O(n) for the map storing frequencies

//...............................................................................
// Pseudocode for counting frequency of elements in an array

// Start

// Input: array arr
// Output: map freq with each element and its frequency

// Initialize empty map freq

// For each element x in arr:
//    freq[x] = freq[x] + 1

// For each key, value in freq:
//    Print key and value

// End
//...............................................................................
