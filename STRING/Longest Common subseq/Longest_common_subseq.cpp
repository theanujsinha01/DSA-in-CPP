#include <bits/stdc++.h>
using namespace std;

int longestCommonSubsequence(string s1, string s2) {
    int n1 = s1.size();
    int n2 = s2.size();
    int dp[n1 + 1][n2 + 1] = {0};  // DP table initialized with 0

    // Fill the DP table
    for (int i = 1; i <= n1; i++) {
        for (int j = 1; j <= n2; j++) {
            if (s1[i - 1] == s2[j - 1]) {  // Characters match
                dp[i][j] = dp[i - 1][j - 1] + 1;
            } else {  // Take the maximum from the previous subproblems
                dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
            }
        }
    }

    return dp[n1][n2];  // The bottom-right cell contains the LCS length
}

int main() {
    string s1 = "abcde";
    string s2 = "acde";
    cout << "Longest Common Subsequence Length: " << longestCommonSubsequence(s1, s2) << endl;
    return 0;
}

