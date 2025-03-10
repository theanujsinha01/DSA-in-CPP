#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of coins: ";
    cin >> n;

    vector<int> coins(n);
    cout << "Enter the coins: ";
    for (int i = 0; i < n; i++) {
        cin >> coins[i];
    }

    int amount;
    cout << "Enter the amount: ";
    cin >> amount;

    // Declare dp array
    vector<vector<int>> dp(n + 1, vector<int>(amount + 1, (int)1e9));

    // Initialize base case
    for (int i = 0; i <= n; i++) {
        dp[i][0] = 0; // 0 coins needed to make sum 0
    }

    // Fill dp table using the picked and not picked approach
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= amount; j++) {
            // Case 1: Do not pick the coin
            dp[i][j] = dp[i - 1][j];

            // Case 2: Pick the coin (if possible)
            if (coins[i - 1] <= j) {
                dp[i][j] = min(dp[i][j], 1 + dp[i][j - coins[i - 1]]);
            }
        }
    }

    // Output the result
    if (dp[n][amount] >= (int)1e9) {
        cout << "It is not possible to make the amount with the given coins." << endl;
    } else {
        cout << "Minimum number of coins required: " << dp[n][amount] << endl;
    }

    return 0;
}
