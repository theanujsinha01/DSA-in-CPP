#include <bits/stdc++.h>
using namespace std;

 int maxProfit(vector<int>& prices) {
        int maxPro = 0;
        int minPrice = INT_MAX;
     for(int i = 0; i < prices.size(); i++){
        minPrice = min(minPrice, prices[i]);
        maxPro = max(maxPro, prices[i] - minPrice);
    }
    return maxPro;
}

    
int main() {

    vector<int>prices = {1, 10, 4, 30};
    int ans = maxProfit(prices);
   
    cout << "Maximum profit  : "<<ans;
 
}
