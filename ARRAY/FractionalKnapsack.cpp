#include <bits/stdc++.h>
using namespace std;

double fractionalKnapsack(int capacity, vector<int> &val, vector<int> &wt) {
    vector<pair<double, int>> ratio;

    for (int i = 0; i < val.size(); i++) {
        double r = (double)val[i] / wt[i];
        ratio.push_back({r, i});
    }

    sort(ratio.rbegin(), ratio.rend()); // sort by ratio high to low
    double total = 0;

    for (int i = 0; i < ratio.size(); i++) {
        double r = ratio[i].first;
        int idx = ratio[i].second;
       
        if (wt[idx] <= capacity) {
            total = total + val[idx];
            capacity = capacity - wt[idx];
        } else {
            total = total + (r*capacity);// take the fraction of the item
            break;
        }
    }
    return total;
}

int main() {
     
    vector<int> val = {60, 100, 120};
    vector<int> wt = {10, 20, 30};
    int capacity = 50; // Capacity of knapsack
    
    double maxValue = fractionalKnapsack(capacity, val, wt);
    cout << "Max value: " << maxValue << endl;
    return 0;
}

// time complexity: O(n log n), where n is the number of items. This is due to the sorting step.
// space complexity: O(n), for storing the ratio of value to weight for each item in a vector.

/*---------------------------------------------------------------------------------
Start

Input: values, weights, capacity

For each item:
    Calculate value/weight ratio

Sort items by ratio (high to low)

total = 0

For each item in sorted order:
    If item fits:
        Add full value to total
        Subtract weight from capacity
    Else:
        Add fraction of value to total
        Break

Return total
End
----------------------------------------------------------------------------------
*/