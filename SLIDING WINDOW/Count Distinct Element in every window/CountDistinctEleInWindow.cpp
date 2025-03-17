#include <bits/stdc++.h>
using namespace std;

vector<int> countDistinctInWindow(vector<int>& arr, int k) {
    int n = arr.size();
    vector<int> ans;
    unordered_map<int, int> freqMap;
    int start = 0;
    int end = start + k - 1;  

    while(end<n) {
        freqMap.clear(); // Clear the map for each new window

        // Count distinct elements in the current window
        for (int i = start; i<=end; i++) {
            freqMap[arr[i]]++;
        }

        // Store the distinct count
        ans.push_back(freqMap.size());
        start++;
        end++;
    }
    return ans;
}

int main() {
    vector<int> arr = {1, 2, 1, 3, 4, 2, 3};
    int k = 4;
    
    vector<int> result = countDistinctInWindow(arr, k);
    
    for (int num : result) {
        cout << num << " ";
    }
}
