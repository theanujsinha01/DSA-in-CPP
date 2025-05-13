#include <bits/stdc++.h>
using namespace std;

int countPalindromicSubstrings(string s) {
    int n = s.size(), count = 0;

    // Odd-length palindromes
    for (int i = 0; i < n; i++) {
        int l = i, r = i;
        while (l >= 0 && r < n && s[l] == s[r]) {
            count++;
            l--;
            r++;
        }
    }

    // Even-length palindromes
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
    string s = "ababa";

    int result = countPalindromicSubstrings(s);
    cout << "Total palindromic substrings: " << result << endl;
    return 0;
}
// Time Complexity: O(n^2), where n is the length of the string. Each character is processed in a nested loop for both odd and even-length palindromes.
// Space Complexity: O(1), as we are using a constant amount of space for variables and not using any additional data structures that grow with input size.
