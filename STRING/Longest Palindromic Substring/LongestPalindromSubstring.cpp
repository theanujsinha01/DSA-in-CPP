#include <bits/stdc++.h>
using namespace std;

// Helper function to expand around the center and find the length of palindrome
string expandAroundCenter(const string& s, int left, int right) {
    while (left >= 0 && right < s.length() && s[left] == s[right]) {
        left--;   // Move left pointer to the left
        right++;  // Move right pointer to the right
    }
    // Return the longest palindrome for this center
    return s.substr(left + 1, right - left - 1);
}

string longestPalindrome(string s) {
    if (s.empty()) return "";
    string longest = s.substr(0, 1); 

    // Loop through the string to consider every character and character pair as center
    for (int i = 0; i < s.length(); i++) {
        // Case 1: Single character center (odd-length palindrome)
        string oddPalindrome = expandAroundCenter(s, i, i);
        if (oddPalindrome.length() > longest.length()) {
            longest = oddPalindrome;
        }

        // Case 2: Two consecutive characters center (even-length palindrome)
        string evenPalindrome = expandAroundCenter(s, i, i + 1);
        if (evenPalindrome.length() > longest.length()) {
            longest = evenPalindrome;
        }
    }

    return longest;
}

int main() {
    string str;
    cout << "Enter a string: ";
    cin >> str;

    string result = longestPalindrome(str);
    cout << "Longest Palindromic Substring: " << result << endl;

    return 0;
}
