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


