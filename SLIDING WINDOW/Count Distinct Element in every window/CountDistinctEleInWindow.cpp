#include <bits/stdc++.h>
using namespace std;

vector<int> countDistinctInWindow(int K, vector<int>& Arr, int N) {
    unordered_map<int, int> freqMap; 
    vector<int> result;
    int idx = 0;
    while (idx < K) {
        freqMap[Arr[idx]]++;
        idx++;
    }
    result.push_back(freqMap.size()); // Add distinct count for the first window

    // Process the remaining windows
    for (int i = 1; i <= N - K; i++) {
        // Remove the element going out of the window
        freqMap[Arr[i - 1]]--;
        if (freqMap[Arr[i - 1]] == 0) {
            freqMap.erase(Arr[i - 1]);
        }

        // Add the element coming into the window
        freqMap[Arr[i + K - 1]]++;

        // Add the distinct count for the current window
        result.push_back(freqMap.size());
    }

    return result;
}

int main() {
    vector<int> arr = {1,2,1,3,4,2,3};
    int n = arr.size();
    int k = 4;
    vector<int> ans = countDistinctInWindow(k, arr, n);

    cout << "Distinct elements in every window of size " << k << " are: ";
    for (int i : ans) {
        cout << i << " ";
    }

    return 0;
}
