#include <bits/stdc++.h>
using namespace std;

string longestPalindrome(string s) {
    int n = s.size();
    int start = 0, maxLen = 1;

    // For odd-length palindromes
    for (int i = 0; i < n; i++) {
        int l = i, r = i;
        while (l >= 0 && r < n && s[l] == s[r]) {
            l--;
            r++;
        }
        int len = r - l - 1; // Length of the palindrome
        if (len > maxLen) {
            maxLen = len;
            start = l + 1;
        }
    }

    // For even-length palindromes
    for (int i = 0; i < n; i++) {
        int l = i, r = i + 1;
        while (l >= 0 && r < n && s[l] == s[r]) {
            l--;
            r++;
        }
        int len = r - l - 1; // Length of the palindrome
        if (len > maxLen) {
            maxLen = len;
            start = l + 1;
        }
    }

    return s.substr(start, maxLen);
}

int main() {
    string s = "babad";
    string result = longestPalindrome(s);
    cout << "The longest palindromic substring is: " << result << endl;
    return 0;
}
// time complexity: O(n^2), where n is the length of the string s.
// space complexity: O(1), as we are using a constant amount of extra space for the start and maxLen variables.

// --------------------------------------------------
// Pseudo code to find the longest palindromic substring in a given string

// Start

// Input string s
// Set n = length of s
// Initialize start = 0
// Initialize maxLen = 1

// Loop i from 0 to n - 1:
//     // Check for odd-length palindromes
//     Set l = i, r = i
//     While l >= 0 and r < n and s[l] == s[r]:
//         Decrement l by 1
//         Increment r by 1
//     Set len = r - l - 1
//     If len > maxLen:
//         Set maxLen = len
//         Set start = l + 1

// Loop i from 0 to n - 1:
//     // Check for even-length palindromes
//     Set l = i, r = i + 1
//     While l >= 0 and r < n and s[l] == s[r]:
//         Decrement l by 1
//         Increment r by 1
//     Set len = r - l - 1
//     If len > maxLen:
//         Set maxLen = len
//         Set start = l + 1

// Return substring of s starting at start with length maxLen

// End
// --------------------------------------------------


