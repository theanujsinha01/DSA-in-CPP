#include <bits/stdc++.h>
using namespace std;

int secondMin(vector<int>& arr) {
    int ans = INT_MAX;
    int mn = arr[0];
    for (int i = 1; i < arr.size(); i++) {
        mn = min(mn, arr[i]);
    }
    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] != mn) {
            ans = min(ans, arr[i]);
        }
    }
    return ans;
}
int main() {
    vector<int> arr = {1, 2, 3, 4, 5};
    cout << "Second smallest element: " << secondMin(arr) << endl;
    return 0;
}
