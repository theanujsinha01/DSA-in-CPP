#include <bits/stdc++.h>
using namespace std;

int maxProfit(vector<int>& prices) {
        int maxPro = 0;
        int n = prices.size();
      
     for(int i = 0; i < prices.size(); i++){
        
          while(i+1 <n && prices[i] > prices[i+1]) i++;
          int buy = prices[i];
          while(i+1 <n && prices[i] < prices[i+1]) i++;
          
          maxPro = maxPro + (prices[i] - buy);
       }
    return maxPro;
}

    
int main() {

    vector<int>prices = {1, 10, 4, 30};
    int ans = maxProfit(prices);
   
    cout << "Maximum profit  : "<<ans;
 
}
