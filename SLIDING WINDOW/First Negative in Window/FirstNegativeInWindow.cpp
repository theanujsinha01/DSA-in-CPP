#include <bits/stdc++.h>
using namespace std;

vector<int> firstNegativeInWindow(int K, vector<int>& Arr, int N) {
    deque<int> dq;  // Deque to store negative elements
    vector<int> result;  // Stores first negative in each window

    // Process first K elements
    for (int i = 0; i < K; i++) {
        if (Arr[i] < 0) {
            dq.push_back(Arr[i]);  // Store negative numbers
        }
    }

    // Process rest of the array
    for (int i = K; i < N; i++) {
        // Add the first negative element of the previous window
        result.push_back(dq.empty() ? 0 : dq.front());

        // Remove the element going out of the window
        if (!dq.empty() && dq.front() == Arr[i - K]) {
            dq.pop_front();
        }

        // Add new element if it's negative
        if (Arr[i] < 0) {
            dq.push_back(Arr[i]);
        }
    }

    // Add the first negative of the last window
    result.push_back(dq.empty() ? 0 : dq.front());

    return result;
}

int main() {
    vector<int> arr = {1, -2, -3, 4, 5, -6, 7, 8};
    int n = arr.size();
    int k = 3;
    
    vector<int> ans = firstNegativeInWindow(k, arr, n);

    cout << "First negative integer in every window of size " << k << " is: ";
    for (auto it : ans) {
        cout << it << " ";
    }

    return 0;
}
