#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k;
    cout << "Enter the number of elements: ";
    cin >> n;
    cout << "Enter the sum: ";
    cin >> k;

    vector<int> nums(n);
    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    // Initialize dp table
    vector<vector<int>> dp(n + 1, vector<int>(k + 1, 0));

    // Base case: There is 1 way to form sum 0 (empty subset)
    for (int i = 0; i <= n; i++) {
        dp[i][0] = 1;
    }

    // Fill dp table
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= k; j++) {
            int pick = 0;
            if (nums[i - 1] <= j) { // If element can be picked
                pick = dp[i - 1][j - nums[i - 1]];
            }
            int notPick = dp[i - 1][j];
            dp[i][j] = pick + notPick;
        }
    }

    // Output the result
    cout << "Number of subsequences with sum " << k << ": " << dp[n][k] << endl;

    return 0;
}
