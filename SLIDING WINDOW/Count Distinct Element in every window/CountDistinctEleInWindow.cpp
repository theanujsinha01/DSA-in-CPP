#include<bits/stdc++.h>
using namespace std;

vector<int> countDistinctInWindow(int K, vector<int>& Arr, int N) {
    unordered_map<int, int> freqMap;  // To store the frequency of elements in the current window
    vector<int> result;  // To store the distinct count in each window
    int left = 0, right = 0;

    while (right < N) {
        // Add the current element to the frequency map
        freqMap[Arr[right]]++;

        // Check if the window size is less than K
        if (right - left + 1 < K) {
            right++;
        } 
        // When the window size hits K
        else if (right - left + 1 == K) {
            // The size of the frequency map gives the number of distinct elements
            result.push_back(freqMap.size());

            // Slide the window forward by removing the leftmost element
            freqMap[Arr[left]]--;
            if (freqMap[Arr[left]] == 0) {
                freqMap.erase(Arr[left]);  // Remove the element if its count becomes zero
            }

            left++;
            right++;
        }
    }

    return result;
}

int main() {
    vector<int> arr = {1, 2, 1, 3, 4, 2, 3};
    int n = arr.size();
    int k = 4;
    vector<int> ans = countDistinctInWindow(k, arr, n);

    cout << "Distinct elements in every window of size " << k << " are: ";
    for (int i : ans) {
        cout << i << " ";
    }

    return 0;
}
