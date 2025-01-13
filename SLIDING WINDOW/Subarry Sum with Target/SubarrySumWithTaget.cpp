#include <bits/stdc++.h>
using namespace std;

// Function to find the subarray with a given target sum
vector<int> subarraySum(vector<int> &arr, int target) {
    vector<int> ans(2);
    int n = arr.size();
    int i = 0, j = 0;
    int sum = 0;

    while (j < n) {
        sum += arr[j]; // Add the current element to the sum

        // If the sum exceeds the target, adjust the left pointer 'i'
        while (sum > target && i < j) {
            sum -= arr[i]; // Remove the leftmost element from the sum
            i++; // Move the left pointer forward to shrink the window
        }

        // If the sum equals the target, return the 1-based indices
        if (sum == target) {
            ans[0] = i;
            ans[1] = j;
            return ans;
        }

        j++; // Move the right pointer to expand the window
    }

    return {-1, -1}; // If no subarray is found
}

int main() {
    
    vector<int> arr = {1, 2, 3, 7, 5};
    int target = 12;

    vector<int> result = subarraySum(arr, target);
    for(auto it : result){
        cout << it << " ";
    }
    return 0;
}
