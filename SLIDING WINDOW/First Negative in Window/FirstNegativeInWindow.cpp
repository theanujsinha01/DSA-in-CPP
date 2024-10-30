#include<bits/stdc++.h>
using namespace std;

vector<int> firstNegativeInWindow(int K, vector<int>& Arr, int N) {
    int left = 0, right = 0;
    queue<int> negatives;  // To store the negative elements
    vector<int> result;    // To store the first negative in each window

    while (right < N) {
        // If the current element is negative, add  to the queue
        if (Arr[right] < 0) {
            negatives.push(Arr[right]);
        }

        // Check if the window size is less than K
        if (right - left + 1 < K) {
            right++;
        }
        // When the window size hits K
        else if (right - left + 1 == K) {
            // If there are any negative numbers in the queue, add the first one
            if (negatives.size() > 0) {
                result.push_back(negatives.front());
            } else {
                // If no negative number in the window, add 0
                result.push_back(0);
            }

            // Slide the window forward
            if (negatives.size() >0 && negatives.front() == Arr[left]) {
                negatives.pop();  // Remove the first negative if it goes out of the window
            }

            left++;
            right++;
        }
    }

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
