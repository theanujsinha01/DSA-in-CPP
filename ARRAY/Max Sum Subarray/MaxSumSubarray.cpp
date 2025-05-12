#include <bits/stdc++.h>
using namespace std;
//Kadane's Algo

int maxSubarraySum(vector<int>& arr) {
    int maxSum = INT_MIN;  
    int currentSum = 0;
    int n = arr.size();

    for (int i = 0; i < n; i++) {
        currentSum = currentSum + arr[i];
        maxSum = max(maxSum, currentSum); 

        if (currentSum < 0) {
            currentSum = 0;  
        }
    }

    return maxSum; 
}

int main() {

    vector<int> arr = {1, -2, 3, 4, -1, 2, 1, -5, 4};
    int result = maxSubarraySum(arr);
    cout << "Maximum sum of a subarray is: " << result << endl;
    return 0;
}
