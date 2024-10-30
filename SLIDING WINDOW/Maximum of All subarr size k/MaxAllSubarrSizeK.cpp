#include <bits/stdc++.h>
using namespace std;

vector<int> maximumOfAllSubarrays(int K, vector<int>& Arr, int N) {
    deque<int> dq;  // Deque to store indices of useful elements
    vector<int> result;  // To store maximums of all windows

    int left = 0, right = 0;

    while (right < N) {
        // Remove elements from the deque that are out of the current window
        if (!dq.empty() && dq.front() == left) {
            dq.pop_front();
        }

        // Remove elements from deque which are smaller than the current element
        while (!dq.empty() && Arr[dq.back()] < Arr[right]) {
            dq.pop_back();
        }

        // Add the current element index to the deque
        dq.push_back(right);

        // If the window size is less than K, just increase the right pointer
        if (right - left + 1 < K) {
            right++;
        } 
        // If window size hits K
        else if (right - left + 1 == K) {
            // The front of the deque is the largest element in this window
            result.push_back(Arr[dq.front()]);

            // Slide the window
            left++;
            right++;
        }
    }

    return result;
}

int main() {
    vector<int> arr = {1, 2, 9, 4, 12};
    int n = arr.size();
    int k = 3;
    vector<int> ans = maximumOfAllSubarrays(k, arr, n);

    cout << "Maximum of all subarrays of size k are: ";
    for (int i : ans) {
        cout << i << " ";
    }

    return 0;
}
