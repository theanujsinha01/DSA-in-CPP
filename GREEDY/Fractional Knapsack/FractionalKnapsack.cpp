#include <bits/stdc++.h>
using namespace std;

double fractionalKnapsack(int W, int values[], int weights[], int n) {
    vector<pair<double, int>> unitValue; // Stores value/weight and index

    // Calculate value/weight for each item and store in the vector
    for (int i = 0; i < n; i++) {
        unitValue.push_back({(double)values[i] / weights[i], i});
    }

    // Sort items based on value per weight in descending order
    sort(unitValue.rbegin(), unitValue.rend());

    double ans = 0;

    for (int i = 0; i < n; i++) {
        int idx = unitValue[i].second; // Get the index of the current item

        if (weights[idx] <= W) {
            // Take the entire item if it fits
            ans += values[idx];
            W -= weights[idx];
        } else {
            // Take the fractional part of the item
            ans += unitValue[i].first * W;
            break;
        }
    }

    return ans;
}

int main() {
    int n, W;

    cout << "Enter number of items: ";
    cin >> n;

    int values[n], weights[n];

    // Input values and weights
    for (int i = 0; i < n; i++) {
        cout << "Enter value and weight for item " << i + 1 << ": ";
        cin >> values[i] >> weights[i];
    }

    cout << "Enter knapsack capacity: ";
    cin >> W;

    double maxValue = fractionalKnapsack(W, values, weights, n);

    cout << "Maximum value in Knapsack = " << maxValue << endl;

    return 0;
}
