#include <bits/stdc++.h>
using namespace std;

vector<int> rotateArray(vector<int>&arr, int k) {
    int n = arr.size();
    k = k % n; 
    if (k == 0) return arr;
      
    reverse(arr.begin(), arr.end());
    reverse(arr.begin(), arr.begin() + k);
    reverse(arr.begin() + k, arr.end());
    return arr;
}

int main() {
    vector<int> arr = {1, 2, 3, 4, 5, 6, 7};
    vector<int> ans = rotateArray(arr, 3);

    cout << "Array after rotation: ";
    for (auto it : ans) {
        cout << it << " ";
    }
    return 0;
}
// Time Complexity: O(n)
// Space Complexity: O(1)
