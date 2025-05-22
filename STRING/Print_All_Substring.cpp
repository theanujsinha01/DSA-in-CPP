#include <bits/stdc++.h>
using namespace std;

void printSubstrings(const string &str) {
    int n = str.length();
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j <= n; j++) {
            cout << str.substr(i, j - i) << endl;
        }
    }
}

int main() {
    string str = "abc";  // Input string
    printSubstrings(str);
    return 0;
}
// time complexity: O(n^2)
// space complexity: O(1)

// --------------------------------------------------
// Pseudo code to print all substrings of a given string

// Start

// Input string str
// Set n = length of str

// For i from 0 to n - 1:
//     For j from i + 1 to n:
//         Output substring of str from index i to (j - 1)

// End
// --------------------------------------------------
