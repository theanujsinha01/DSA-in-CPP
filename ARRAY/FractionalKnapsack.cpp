#include <bits/stdc++.h>
using namespace std;

double fractionalKnapsack(int W, vector<int> &val, vector<int> &wt) {
    vector<pair<double, int>> ratio;

    for (int i = 0; i < val.size(); i++) {
        double r = (double)val[i] / wt[i];
        ratio.push_back({r, i});
    }

    sort(ratio.rbegin(), ratio.rend()); // sort by ratio high to low
    double total = 0;

    for (int i = 0; i < ratio.size(); i++) {
        int idx = ratio[i].second;
        double r = ratio[i].first;

        if (wt[idx] <= W) {
            total += val[idx];
            W -= wt[idx];
        } else {
            total += r * W; // take the fraction of the item
            break;
        }
    }
    return total;
}

int main() {
     
    vector<int> val = {60, 100, 120};
    vector<int> wt = {10, 20, 30};
    int W = 50; // Capacity of knapsack
    
    double maxValue = fractionalKnapsack(W, val, wt);
    cout << "Max value: " << maxValue << endl;
    return 0;
}

// time complexity: O(n log n), where n is the number of items. This is due to the sorting step.
// space complexity: O(n), for storing the ratio of value to weight for each item in a vector.

// ----------------------------------------------------------------------------------
// Pseudo code

// Start

// Input: Arrays val (values), wt (weights), and W (capacity of knapsack)
// Create empty list ratio

// For i = 0 to val.size():
//     Calculate ratio = val[i] / wt[i]
//     Store (ratio, i) in ratio list

// Sort ratio list in descending order (high to low)

// Set total = 0

// For each (ratio, index) in sorted ratio list:
//     If wt[index] <= W:
//         total = total + val[index]
//         W = W - wt[index]
//     Else:
//         total = total + ratio × W
//         Break the loop

// Return total

// In main:
//     Input val = {60, 100, 120}, wt = {10, 20, 30}, W = 50
//     Call fractionalKnapsack(W, val, wt) → maxValue
//     Print maxValue

// End
// ----------------------------------------------------------------------------------
