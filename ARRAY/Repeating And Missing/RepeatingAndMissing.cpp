#include <bits/stdc++.h>
using namespace std;

int findRepeating(vector<int>& arr) {
    int n = arr.size();
    map<int, int> freq; 
    int repeating = 0; 

    for (int i = 0; i < n; i++) {
        freq[arr[i]]++;
    }

    for (int i = 0; i < n; i++) {
        if (freq[arr[i]] > 1) {
            repeating = arr[i];
            break;
        }
    }
    return repeating; // ✅ Return the repeating element
}

int findMissing(vector<int>& arr) {
    int n = arr.size();
    map<int, int> freq;

    for (int i = 0; i < n; i++) {
        freq[arr[i]]++;
    }

    for (int i = 1; i <= n; i++) {
        if (freq[i] == 0) {
            return i;
        }
    }

    return -1; // ✅ Safe return if no missing number found
}

int main() {
    vector<int> arr = {1, 2, 2, 4};  
    int repeating = findRepeating(arr);
    int missing = findMissing(arr);
    cout << "Repeating element: " << repeating << endl;
    cout << "Missing element: " << missing << endl;
    return 0;
}
// Time Complexity: O(n), where n is the size of the array.
// Space Complexity: O(n), where n is the size of the array.