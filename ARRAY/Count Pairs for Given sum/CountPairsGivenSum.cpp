#include <iostream>
using namespace std;

int countPairsWithSum(int arr[], int n, int target) {
    int count = 0;

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
    int arr[] = {1, 5, 7, -1, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target = 6;

    int result = countPairsWithSum(arr, n, target);

    cout << "Number of pairs with sum " << target << ": " << result << endl;

    return 0;
}