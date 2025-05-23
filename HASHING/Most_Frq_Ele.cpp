#include <bits/stdc++.h>
using namespace std;

int mostFrequentElement(vector<int>& arr) {
    map<int, int> freq;
    for (int x : arr) freq[x]++;
    
    int mostFrequent = arr[0];
    for (auto p : freq) {
        if (p.second > freq[mostFrequent]) {
            mostFrequent = p.first;
        }
    }
    return mostFrequent;
}

int main() {
    vector<int> arr = {1, 2, 2, 3, 3, 3};
    int mostFrequent = mostFrequentElement(arr);
    cout << "Most frequent element: " << mostFrequent;
    return 0;
}
// Time complexity: O(n) for counting frequencies and O(m) for finding the most frequent element, total O(n + m)
// Space complexity: O(m) for the frequency map, where m is the number of unique elements in arr


//...............................................................................
// Pseudocode to find most frequent element in an array

// Start

// Input: array arr
// Output: element with highest frequency

// Create empty map freq to store counts of each element
// For each element x in arr:
//    Increase freq[x] by 1

// Initialize mostFrequent = first element of arr
// For each (element, count) pair in freq:
//    If count > freq[mostFrequent]:
//       Update mostFrequent = element

// Return mostFrequent

// End
//...............................................................................
