#include <bits/stdc++.h>
using namespace std;

int maxProfit(vector<int>& prices) {

    if (prices.size() == 0) return 0; 
    int Profit = 0;   
    for (int i = 1; i < prices.size(); i++) {
       
        if (prices[i] > prices[i - 1]) {
            Profit = Profit + (prices[i] - prices[i - 1]);
        }
    }
    return Profit;
}

int main() {
    vector<int> prices = {16, 11, 5, 3, 6, 12};
    cout << "Maximum profit: " << maxProfit(prices) << endl;
    return 0;
}
// time complexity: O(n), where n is the size of the input array prices.
// space complexity: O(1), as we are using a constant amount of extra space for the Profit variable.

// ----------------------------------------------------------------------------------
// Start

// Input: array prices

// Function maxProfit:
//     Set Profit = 0
//     For i = 1 to prices.size() - 1:
//         If prices[i] > prices[i - 1]:
//             Profit = Profit + (prices[i] - prices[i - 1])
//     Return Profit
// In main:
//     Call maxProfit(prices)
//     Print Profit
// End
// ----------------------------------------------------------------------------------
