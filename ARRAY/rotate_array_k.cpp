#include <bits/stdc++.h>
using namespace std;

vector<int> rotateArray(vector<int>& arr, int k) {
    int n = arr.size();
    k = k % n;  // In case k > n

    // Step 1: Reverse first k elements
    reverse(arr.begin(), arr.begin() + k);

    // Step 2: Reverse rest elements
    reverse(arr.begin() + k, arr.end());

    // Step 3: Reverse whole array
    reverse(arr.begin(), arr.end());

    return arr;
}

int main() {
    vector<int>arr = {1, 2, 3, 4, 5, 6, 7};
    int k = 3;

    vector<int>ans = rotateArray(arr, k);

    cout << "Array after rotating by " << k << " positions: ";
    for(int i = 0; i < ans.size(); i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
