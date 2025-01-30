#include <bits/stdc++.h>
using namespace std;

int maxProductSubarray(int arr[], int n) {
    int prefix=1;
    int suffix=1;
    int mx = INT_MIN;
    for(int i=0;i<n;i++)
     {
        if(prefix==0) prefix=1;
        if(suffix==0) suffix=1;
        prefix=prefix*arr[i];
        suffix=suffix*arr[n-1-i];
        mx= max(mx,max(prefix,suffix));
    }
        
  return mx;
}

int main() {
    int arr[] = {2, -100, 2, 4};
    int n = 4;

    cout << "Maximum product: " << maxProductSubarray(arr, n) << endl;

    return 0;
}
