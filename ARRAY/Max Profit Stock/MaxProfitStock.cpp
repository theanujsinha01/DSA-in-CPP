#include <bits/stdc++.h>
using namespace std;

int maxProfit(const vector<int>& prices) {

    if (prices.size() == 0) return 0; 
    int Profit = 0;   

    for (int i = 1; i < prices.size(); i++) {
        // Update the minimum price if the current price is lower
        if (prices[i] > prices[i - 1]) {
            Profit = Profit + prices[i] - prices[i - 1];
        }
    }

    return Profit;
}

int main() {
    vector<int> prices = {16, 11, 5, 3, 6, 12};
    cout << "Maximum profit: " << maxProfit(prices) << endl;
    return 0;
}
