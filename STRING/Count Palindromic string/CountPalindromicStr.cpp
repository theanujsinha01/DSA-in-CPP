#include <bits/stdc++.h>
using namespace std;

int countPalindromesAroundCenter( string& str, int left, int right) {
    int count = 0;
    int n = str.size();

    while (left >= 0 && right < n && str[left] == str[right]) {
        count++;  // Increment the count for each palindrome
        left--;
        right++;
    }

    return count;
}

int countSubstrings(const string& str) {
    int n = str.size();
    int count = 0;

   
    for (int i = 0; i < n; i++) {
        // Odd-length palindromes (centered at a single character)
        count += countPalindromesAroundCenter(str, i, i);
        // Even-length palindromes (centered between two characters)
        count += countPalindromesAroundCenter(str, i, i + 1);
    }

    return count;
}

int main() {
    string str;
    cout << "Enter a string: ";
    cin >> str;

    int totalPalindromes = countSubstrings(str);
    cout << "Total palindromic substrings: " << totalPalindromes << endl;

    return 0;
}
