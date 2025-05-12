#include <bits/stdc++.h>
using namespace std;

int maxProductSubarray(vector<int>&arr) {
    
  int ans = INT_MIN;
  int product = 1;
  int n = arr.size();
  
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
    int result = maxProductSubarray(arr);
    cout << "Maximum product of a subarray is: " << result << endl;
    return 0;
}
