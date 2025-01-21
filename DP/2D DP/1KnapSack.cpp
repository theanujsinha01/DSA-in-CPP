#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    int val[n], wt[n];
    cout << "Enter the values: ";
    for (int i = 0; i < n; i++) {
        cin >> val[i];
    }

    cout << "Enter the weights: ";
    for (int i = 0; i < n; i++) {
        cin >> wt[i];
    }

    int W;
    cout << "Enter the maximum weight: ";
    cin >> W;

    // Initialize dp array
    int dp[n + 1][W + 1] = {0};

    // Fill the dp table
    for (int i = 0; i <= n; i++) {
        for (int j = 0; j <= W; j++) {
            if (i == 0 || j == 0) {
                dp[i][j] = 0; // Base case: No items or weight capacity is 0
            } else {
                int pick = 0;
                if (wt[i - 1] <= j) {
                    pick = val[i - 1] + dp[i - 1][j - wt[i - 1]]; // Include current item
                }
                int notPick = dp[i - 1][j]; // Exclude current item
                dp[i][j] = max(pick, notPick); // Take maximum of both
            }
        }
    }

    // Output the maximum value
    cout << "Maximum value: " << dp[n][W] << endl;

    return 0;
}
