#include <bits/stdc++.h>
using namespace std;

int maxProfit(const vector<int>& prices) {

    if (prices.empty()) return 0;

    int minPrice = prices[0];  
    int maxProfit = 0;   

    for (int i = 1; i < prices.size(); i++) {
        // Update the minimum price if the current price is lower
        minPrice = min(minPrice, prices[i]);

        // Calculate the current profit and use max() to update the maximum profit
        int currentProfit = prices[i] - minPrice;
        maxProfit = max(maxProfit, currentProfit);
    }

    return maxProfit;
}

int main() {
    vector<int> prices = {16, 11, 5, 3, 6, 12};
    cout << "Maximum profit: " << maxProfit(prices) << endl;
    return 0;
}
