#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cout << "Enter the string: ";
    cin >> s;
    
    string rev = s;  // Copy of the original string
    reverse(rev.begin(), rev.end());  // Reverse the string
    
    int n = s.size();
    
    // Create dp table for LCS
    vector<vector<int>> dp(n + 1, vector<int>(n + 1, 0));
    
    // Fill dp table using LCS logic
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            if (s[i - 1] == rev[j - 1]) {
                dp[i][j] = 1 + dp[i - 1][j - 1];
            } else {
                dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
            }
        }
    }
    
    // The length of the longest palindromic subsequence
    cout << "Length of Longest Palindromic Subsequence: " << dp[n][n] << endl;

    // Optional: To print the longest palindromic subsequence itself
    string lps = "";
    int i = n, j = n;
    while (i > 0 && j > 0) {
        if (s[i - 1] == rev[j - 1]) {
            lps += s[i - 1];
            i--;
            j--;
        } else if (dp[i - 1][j] > dp[i][j - 1]) {
            i--;
        } else {
            j--;
        }
    }
    
    // Since we built the LPS from the end, we reverse it to get the correct order
    reverse(lps.begin(), lps.end());
    cout << "Longest Palindromic Subsequence: " << lps << endl;

    return 0;
}
