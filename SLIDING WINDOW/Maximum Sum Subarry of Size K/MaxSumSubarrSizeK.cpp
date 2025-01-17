#include<bits/stdc++.h>
using namespace std;

int maximumSumSubarray(int k, vector<int> &Arr, int N) {
    int sum = 0;
    int mx = INT_MIN;
    int idx = 0;
    while (idx < k) {
        sum = sum + Arr[idx]; // Add current element to the sum
        idx++;
    }
    for(int i = 1; i <= N-k; i++) {
        mx = max(mx, sum); 
        sum = sum - Arr[i - 1]; // Remove the first element of the window
        sum = sum + Arr[i+k-1]; // Add the next element to the window
       
    }
    return mx;
}

int main(){
    vector<int>arr = {1, 2, 9, 4, 12, 3, 7, 8};
    int n = arr.size();
    int k = 3;
    int ans = maximumSumSubarray(k, arr, n);
    cout << "Maximum Sum of Subarray size k is: " << ans;
}
