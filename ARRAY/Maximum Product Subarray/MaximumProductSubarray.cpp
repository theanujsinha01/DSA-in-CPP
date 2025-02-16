#include <bits/stdc++.h>
using namespace std;

int maxProductSubarray(int arr[], int n) {
    
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
    int arr[] = {2, -100, 2, 4};
    int n = 4;

    cout << "Maximum product: " << maxProductSubarray(arr, n) << endl;

    return 0;
}
