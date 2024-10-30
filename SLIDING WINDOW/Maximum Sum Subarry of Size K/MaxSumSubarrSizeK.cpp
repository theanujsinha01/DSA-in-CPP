#include<bits/stdc++.h>
using namespace std;

int maximumSumSubarray(int K, vector<int> &Arr, int N) {
    int left = 0, right = 0;
    int sum = 0;
    int mx = INT_MIN;

    while (right < N) {
        sum += Arr[right]; // Add current element to the sum

        // Check if the window size is less than K
        if (right - left + 1 < K) {
            right++; // Increase j until we reach window size K
        }
        // When the window size hits K
        else if (right - left + 1 == K) {
            mx = max(mx, sum); // Update maximum sum
            sum -= Arr[left]; // Remove the first element of the window
            left++; // Slide the window forward
            right++;
        }
    }
    return mx;
}

int main(){
    vector<int>arr = {1,2,9,4,12,3,7,8};
    int n = arr.size();
    int k = 3;
    int ans = maximumSumSubarray(k, arr, n);
    cout<<"Maximum Sum of Subarry size k  is  : "<<ans;
}