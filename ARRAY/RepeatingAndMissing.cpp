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

// ----------------------------------------------------------------------------------
// Pseudo code

// Start

// Input: array arr of size n containing numbers from 1 to n with one repeating and one missing number

// Function findRepeating:
//     Create empty map freq
//     For i = 0 to n-1:
//         freq[arr[i]] = freq[arr[i]] + 1
//     For i = 0 to n-1:
//         If freq[arr[i]] > 1:
//             Return arr[i]

// Function findMissing:
//     Create empty map freq
//     For i = 0 to n-1:
//         freq[arr[i]] = freq[arr[i]] + 1
//     For i = 1 to n:
//         If freq[i] == 0:
//             Return i
//     Return -1  // If no missing number found

// In main:
//     Input arr = {1, 2, 2, 4}
//     Call findRepeating(arr) → repeating
//     Call findMissing(arr) → missing
//     Print repeating
//     Print missing

// End
// ----------------------------------------------------------------------------------
