#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of coins: ";
    cin >> n;

    int coins[n];
    cout << "Enter the coins: ";
    for (int i = 0; i < n; i++) {
        cin >> coins[i];
    }

    int amount;
    cout << "Enter the amount: ";
    cin >> amount;

    // Declare dp array
    int dp[n + 1][amount + 1];

    // Initialize dp array
    for (int i = 0; i <= n; i++) {
        for (int j = 0; j <= amount; j++) {
            if (j == 0) {
                dp[i][j] = 0; // 0 coins to make amount 0
            } else if (i == 0) {
                dp[i][j] = (int)1e9; // Impossible to make non-zero amount with 0 coins
            } else {
                dp[i][j] = -1; // Placeholder for initialization
            }
        }
    }

    // Fill dp table using the picked and not picked approach
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= amount; j++) {
            // Case 1: Do not pick the coin
            int notPicked = dp[i - 1][j];

            // Case 2: Pick the coin (if possible)
            int picked = (int)1e9;
            if (coins[i - 1] <= j) {
                picked = 1 + dp[i][j - coins[i - 1]];
            }

            // Update dp[i][j] with the minimum of the two cases
            dp[i][j] = min(picked, notPicked);
        }
    }

    // Output the result
    if (dp[n][amount] == (int)1e9) {
        cout << "It is not possible to make the amount with the given coins." << endl;
    } else {
        cout << "Minimum number of coins required: " << dp[n][amount] << endl;
    }

    return 0;
}


