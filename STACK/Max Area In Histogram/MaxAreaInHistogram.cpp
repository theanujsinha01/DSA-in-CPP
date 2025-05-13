#include <bits/stdc++.h>
using namespace std;

int maxHistogramArea(vector<int>& h) {
    int n = h.size();
    int maxA = 0;
    stack<int> s;

    for (int i = 0; i <= n; i++) {
        while (!s.empty() && (i == n || h[i] < h[s.top()])) { // Pop until the current height is greater than the top of the stack
            int height = h[s.top()]; // Height of the rectangle
            s.pop();
            int width; 
            if (s.empty()) {
                width = i;
            } else {
                width = i - s.top() - 1;
            }
            maxA = max(maxA, height * width);
        }
        s.push(i);
    }
    return maxA;
}

int main() {
    vector<int> hist = {6, 2, 5, 4, 5, 1, 6};
    cout << maxHistogramArea(hist);
}
// time complexity: O(n) for iterating through the histogram and using the stack
// space complexity: O(n) for the stack used to store indices