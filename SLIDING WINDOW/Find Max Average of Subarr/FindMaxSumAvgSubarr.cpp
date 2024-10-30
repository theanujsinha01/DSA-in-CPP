#include<bits/stdc++.h>
using namespace std;

double findMaxAverage(vector<int>& nums, int k) {
    // SLIDING WINDOW, 2 POINTERS
    double res; // max average
    double currentMaximum; // current maximum average
    double sum = 0; // sum of k values

    int left = 0;
    int right = 0; // starting at the beginning of the array

    while (right < nums.size()) {
        sum += nums[right]; // add current element to the sum

        if (right - left + 1 < k) {
            // increase the window size
            right++;
        } 
        else if (right - left + 1 == k) { 
            // when window size reaches k
            currentMaximum = sum / k; // calculate average
            res = max(res, currentMaximum); // update max average
            sum -= nums[left]; // remove leftmost element
            left++; // slide the window forward
            right++;
        }
    }

    return res;
}

int main(){
    vector<int> nums = {1,2,9,4,12,3,7,8};
    int k = 3;
    double result = findMaxAverage(nums, k);
    cout << "Maximum average of subarray size k is: " << result;
}
