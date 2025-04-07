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
            total += r * W;
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
