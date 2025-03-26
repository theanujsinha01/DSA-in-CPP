#include <bits/stdc++.h>
using namespace std;

void findKthLargestAndSmallest(int arr[], int n, int k) {
  
    sort(arr, arr + n);

    int kthSmallest = arr[k - 1];
    int kthLargest = arr[n - k];

    cout << "Kth Smallest Element: " << kthSmallest << endl;
    cout << "Kth Largest Element: " << kthLargest << endl;

}

int main() {
    int arr[] = {7, 10, 4, 3, 20, 15};
    int n = 6;
    int k = 2; // Example: Find 3rd smallest and largest

    findKthLargestAndSmallest(arr, n, k);

    return 0;
}