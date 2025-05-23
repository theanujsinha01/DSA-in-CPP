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

// time complexity: O(n), where n is the size of the input array arr.
// space complexity: O(1), as we are using a constant amount of extra space for the product and ans variables.

/* ---------------------------------------------------------------------------------
Start

Input: array arr

Function maxProductSubarray:
    Set ans = very small number
    Set product = 1
    Set n = size of arr

    For i = 0 to n-1:
        product = product × arr[i]
        ans = max(ans, product)
        If product == 0:
            product = 1

    Set product = 1

    For i = n-1 down to 0:
        product = product × arr[i]
        ans = max(ans, product)
        If product == 0:
            product = 1

    Return ans

In main:
    Call maxProductSubarray(arr)
    Print ans
End
--------------------------------------------------------------------------------*/
