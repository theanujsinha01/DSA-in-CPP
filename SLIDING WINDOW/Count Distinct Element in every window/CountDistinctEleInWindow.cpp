#include <bits/stdc++.h>
using namespace std;

vector<int> countDistinctInWindow(vector<int>& arr, int k) {
    int start = 0;
    int end = start + k - 1;  
    vector<int> ans;
    unordered_map<int, int> freqMap;

    // Initialize the first window
    for (int i = start; i <= end; i++) {
        freqMap[arr[i]]++;
    }
    ans.push_back(freqMap.size());

    // Process the remaining windows
    while (end < arr.size() - 1) {  
        // Remove the outgoing element
        freqMap[arr[start]]--;
        if (freqMap[arr[start]] == 0) {
            freqMap.erase(arr[start]);
        }
        
        // Move the window forward
        start++;
        end++;

        // Add the new incoming element
        freqMap[arr[end]]++;

        // Store the distinct count for the current window
        ans.push_back(freqMap.size());
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
