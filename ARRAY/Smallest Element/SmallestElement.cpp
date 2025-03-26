#include <bits/stdc++.h>
using namespace std;

int minEle(vector<int>& arr) {
    int n = arr.size();
    int smallest = arr[0];
    for (int i = 0; i < n; i++) {
        if (arr[i] < smallest) {
            smallest = arr[i];
        }
    }
    return smallest;
}
int main() {
    vector<int> arr = {9, 2, 3, 6};
    cout << "Smallest element: " << minEle(arr) << endl;
    return 0;
}
// Time Complexity: O(n), where n is the size of the array.
// Space Complexity: O(1).