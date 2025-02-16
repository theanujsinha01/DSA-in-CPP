#include <bits/stdc++.h>
using namespace std;

int findMajorityElement(int arr[], int n) {
    sort(arr, arr + n); // Sort the array
    return arr[n / 2];  // Middle element is the majority candidate
}

int main() {
    int arr[] = {2, 2, 1, 1, 2, 2, 2};
    int n = sizeof(arr) / sizeof(arr[0]);

    int result = findMajorityElement(arr, n);
    cout << "Majority element: " << result << endl;

    return 0;
}