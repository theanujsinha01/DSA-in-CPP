#include <string>
#include <iostream>
using namespace std;

int countPalindromesAroundCenter(const string& s, int left, int right) {
    int count = 0;
    int n = s.size();

    while (left >= 0 && right < n && s[left] == s[right]) {
        count++;  // Count this palindrome
        left--;
        right++;
    }

    return count;
}

int countSubstrings(string s) {
    int n = s.size();
    int totalCount = 0;

    // For odd-length palindromes
    for (int i = 0; i < n; i++) {
        totalCount += countPalindromesAroundCenter(s, i, i);
    }

    // For even-length palindromes
    for (int i = 0; i < n; i++) {
        totalCount += countPalindromesAroundCenter(s, i, i + 1);
    }

    return totalCount;
}

int main() {
    string s;
    cout << "Enter a string: ";
    cin >> s;

    int result = countSubstrings(s);
    cout << "The total number of palindromic substrings is: " << result << endl;

    return 0;
}
