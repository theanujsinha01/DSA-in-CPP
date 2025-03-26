#include <bits/stdc++.h>
using namespace std;

int maxProductSubarray(vector<int>arr, int n) {
    
  int ans = INT_MIN;
  int product = 1;
  
  for(int i=0; i<n; i++){
    product = product * arr[i];
    ans = max(ans,product);
    if(product == 0) product = 1;
  }
  product = 1;
  for(int i= n-1; i>=0; i--){
    product = product * arr[i];
    ans = max(ans,product);
    if(product == 0) product = 1;
  }
        
  return ans;
}

int main() {
    vector<int>arr = {2, -100, 2, 4};
    int n = arr.size();

    cout << "Maximum product: " << maxProductSubarray(arr, n) << endl;

    return 0;
}
