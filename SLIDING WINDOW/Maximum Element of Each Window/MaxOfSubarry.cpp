#include <bits/stdc++.h>
using namespace std;

vector<int> maxOfSubarrays(vector<int>& arr, int k) {
    vector<int> result;
    deque<int> dq; // To store values of array elements

    // First add the first k elements to the deque
    for (int i = 0; i < k; i++) {
        while (!dq.empty() && dq.back() <= arr[i]) {
            dq.pop_back();  // Remove smaller elements from the back
        }
        dq.push_back(arr[i]);  // Add the current element to the deque
    }

    // Now, process the rest of the elements and the windows
    for (int i = k; i < arr.size(); i++) {
        // The front of the deque holds the largest element of the previous window
        result.push_back(dq.front());

        // Remove elements from the front if they are outside the current window
        if (dq.front() == arr[i - k]) {
            dq.pop_front();
        }

        // Remove all elements smaller than the current element from the back
        while (!dq.empty() && dq.back() <= arr[i]) {
            dq.pop_back();
        }

        // Add the current element to the deque
        dq.push_back(arr[i]);
    }

    // After processing all windows, add the maximum of the last window
    result.push_back(dq.front());

    return result;
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
