#include<bits/stdc++.h>
using namespace std;

double findMaxAverage(vector<int>& nums, int k) {
    // SLIDING WINDOW, 2 POINTERS
    double res; // max average
    double currentMaximum; // current maximum average
    double sum = 0; // sum of k values
    int idx = 0;

    while(idx < k) {
        sum += nums[idx]; // add k elements
        idx++;
    }
    for(int i=1; i<=nums.size()-k; i++) {
        currentMaximum = sum / k; // calculate average
        res = max(res, currentMaximum); // update max average
        sum -= nums[i-1]; // remove leftmost element
        sum += nums[i+k-1]; // add rightmost element
    }

    return res;
}

int main(){
    vector<int> nums = {1,2,9,4,12,3,7,8};
    int k = 3;
    double result = findMaxAverage(nums, k);
    cout << "Maximum average of subarray size k is: " << result;
}
