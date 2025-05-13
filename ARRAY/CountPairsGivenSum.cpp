#include <bits/stdc++.h>
using namespace std;

int countPairsWithSum(vector<int>&arr,int target) {
    int count = 0;
    int n = arr.size();

    // Use a nested loop to check all pairs
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] + arr[j] == target) {
                count++;
            }
        }
    }

    return count;
}

int main() {
    vector<int>arr = {1, 5, 7, -1, 5};
    int target = 6;
    int result = countPairsWithSum(arr, target);
    cout << "Number of pairs with sum " << target << ": " << result << endl;
    return 0;
}