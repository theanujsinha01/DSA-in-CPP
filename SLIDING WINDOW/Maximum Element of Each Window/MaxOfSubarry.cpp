#include <bits/stdc++.h>
using namespace std;

vector<int> maxOfSubarrays(vector<int>& arr, int k) {

    int start = 0;
    int end = start + k - 1;  
    vector<int> ans;

    while (end < arr.size()) {  
        int maxElement = INT_MIN;
        for (int i = start; i <= end; i++) {
            maxElement = max(maxElement, arr[i]);
        }
        ans.push_back(maxElement);
        start++;
        end++;
    }
    return ans;
}

int main() {
    vector<int> arr = {1, 3, -1, -3, 5, 3, 6, 7};
    int k = 3;

    vector<int> result = maxOfSubarrays(arr, k);

    cout << "Maximum of each subarray of size " << k << " is: ";
    for (auto it : result) {
        cout << it << " ";
    }

    return 0;
}
