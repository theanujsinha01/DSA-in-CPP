#include <iostream>
#include <string>
using namespace std;

int longestCommonSubstring(string s1, string s2) {
    int n1 = s1.size();
    int n2 = s2.size();
    int dp[n1 + 1][n2 + 1] = {0};  // Assuming maximum length of strings is 1000
    int maxLength = 0;

    for (int i = 1; i <= n1; i++) {
        for (int j = 1; j <= n2; j++) {
            if (s1[i - 1] == s2[j - 1]) {  // Characters match
                dp[i][j] = dp[i - 1][j - 1] + 1;
                maxLength = max(maxLength, dp[i][j]);  // Update maxLength
            } 
        }
    }

    return maxLength;
}

int main() {
    string s1 = "abcde";
    string s2 = "abfce";
    cout << "Longest Common Substring Length: " << longestCommonSubstring(s1, s2) << endl;
    return 0;
}

