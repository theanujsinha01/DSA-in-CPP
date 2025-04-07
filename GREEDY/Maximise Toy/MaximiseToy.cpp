#include <bits/stdc++.h>
using namespace std;

int toyCount(int K, vector<int>& arr) {
    
    sort(arr.begin(), arr.end());
    int sum = 0;

    for (int i = 0; i < arr.size(); i++) {
        sum += arr[i];
        if (sum > K) return i;
    }
    return arr.size();
}

int main() {
   
    int k = 10; // Budget
    vector<int> arr = {1, 2, 3, 4, 5}; // Prices of toys

    int result = toyCount(k, arr);
    cout << "Maximum toys that can be bought: " << result << endl;
    return 0;
}
// time complexity: O(nlogn) for sorting + O(n) for the loop = O(nlogn)
// space complexity: O(1) for the sum variable and O(n) for the sorting
