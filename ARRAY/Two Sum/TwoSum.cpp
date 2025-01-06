#include <iostream>
using namespace std;

void findTwoSum(int arr[], int n, int target) {
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] + arr[j] == target) {
                cout << "Indices: " << i << " and " << j << endl;
                return; // Exit after finding one solution
            }
        }
    }
    cout << "No two numbers add up to the target." << endl;
}

int main() {
    int arr[] = {2, 7, 11, 15};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target = 9;

    findTwoSum(arr, n, target);

    return 0;
}