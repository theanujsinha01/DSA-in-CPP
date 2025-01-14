#include <bits/stdc++.h>
using namespace std;

// Function to expand around the center and find the longest palindrome
string expandAroundCenter(const string& s, int left, int right) {
    while (left >= 0 && right < s.length() && s[left] == s[right]) {
        left--;   // Move left pointer
        right++;  // Move right pointer
    }
    return s.substr(left + 1, right - left - 1);  // Return the longest palindrome
}

string longestPalindrome(string s) {
    if (s.empty()) return "";
    string longest = s.substr(0, 1); 

    for (int i = 0; i < s.length(); i++) {
        string oddPalindrome = expandAroundCenter(s, i, i);
        if (oddPalindrome.length() > longest.length()) {
            longest = oddPalindrome;
        }

        string evenPalindrome = expandAroundCenter(s, i, i + 1);
        if (evenPalindrome.length() > longest.length()) {
            longest = evenPalindrome;
        }
    }

    return longest;
}

int main() {
    string str;
    cin >> str;
    cout << longestPalindrome(str) << endl;
    return 0;
}

