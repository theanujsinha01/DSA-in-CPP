#include <bits/stdc++.h>
using namespace std;

int KthLargest(vector<int>&v, int k) {
    sort(v.begin(), v.end());
    int n = v.size();
    return v[n - k];

}
int KthSmallest(vector<int>&v, int k) {
    sort(v.begin(), v.end());
    return v[k - 1];
}

int main() {
    vector<int>arr = {1,2,3,4,5,6};
    int k = 2; // Example: Find 3rd smallest and largest
    int kthLargest = KthLargest(arr, k);
    int kthSmallest = KthSmallest(arr, k);
    cout << "Kth Largest: " << kthLargest << endl;
    cout << "Kth Smallest: " << kthSmallest << endl;
    return 0;
}
// Time Complexity: O(nlogn) for sorting
// Space Complexity: O(1) for sorting