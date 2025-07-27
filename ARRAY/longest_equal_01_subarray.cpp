#include <bits/stdc++.h>
using namespace std;

int findMaxLength(vector<int>& arr) {
    
    int count_0 = 0, count_1 = 0;

    for (int i = 0; i < arr.size(); i++){
        if (arr[i] == 0) {
            count_0++;
        } else {
            count_1++;
        }
    }
    int minLen = min(count_0, count_1);
    return 2 * minLen;
}

int main() {
    vector<int>arr = {1, 1, 1, 1, 0, 0, 1};
    int ans = findMaxLength(arr);
    cout << "Length of longest subarray with equal 0s and 1s: " << ans << endl;
    return 0;
}

