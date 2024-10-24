#include <bits/stdc++.h>
using namespace std;

vector<int> nearestSmallerToLeft(vector<int>& arr) {
    int n = arr.size();
    vector<int> result;  // To store the results
    stack<int> s;  // Stack to store elements

    // Traverse from Left to Right
    for (int i = 0; i < n; i++) {
        // Pop elements from stack until we find a smaller element or stack is empty
        while (!s.empty() && s.top() >= arr[i]) {
            s.pop(); 
        }
        
        if (s.empty()) {
            result.push_back(-1);
        } else {
            result.push_back(s.top());
        }
        
        // Push the current element to the stack
        s.push(arr[i]);
        
        // Push the current element to the stack
        s.push(arr[i]);
    }

    return result;
}

int main() {
    vector<int> arr = {4, 5, 2, 10, 8};
    vector<int> result = nearestSmallerToLeft(arr);

    for (auto it : result) {
        cout << it << " ";
    }

    return 0;
}
