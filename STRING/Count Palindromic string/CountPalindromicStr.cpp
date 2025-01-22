#include <bits/stdc++.h>
using namespace std;

int longestPalindrome(string s) {
    int n = s.size();
    int count = 0;

    // For odd-length palindromes count
    for (int i = 0; i < n; i++) {
        int l = i, r = i;
        while (l >= 0 && r < n && s[l] == s[r]) {
            count++;
            l--;
            r++;
        }
    }

    // For even-length palindromes count
    for (int i = 0; i < n; i++) {
        int l = i, r = i + 1;
        while (l >= 0 && r < n && s[l] == s[r]) {
            count++;
            l--;
            r++;
        }
       
    }

    return count;
}

int main() {
    string s;
    cout << "Enter a string: ";
    cin >> s;

    int result = longestPalindrome(s);
    cout << "The longest palindromic substring is: " << result << endl;

    return 0;
}

