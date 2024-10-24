#include <bits/stdc++.h>
using namespace std;

vector<int> nearestSmallerToRight(vector<int>& arr) {
    int n = arr.size();
    vector<int> result(n);  // To store the results
    stack<int> s;  // Stack to store elements

    // Traverse from Right to Left
    for (int i = n - 1; i >= 0; i--) {
        // Pop elements from stack until we find a smaller element or stack is empty
        while (!s.empty() && s.top() >= arr[i]) {
            s.pop(); 
        }
        
        // If stack is empty, no smaller element, otherwise it's the stack's top
        if (s.empty()) {
            result[i] = -1;
        } else {
            result[i] = s.top();
        }
        
        // Push the current element to the stack
        s.push(arr[i]);
    }
 

    return result;
}

int main() {
    vector<int> arr = {4, 5, 2, 10, 8};
    vector<int> result = nearestSmallerToRight(arr);

    for (auto it : result) {
        cout << it << " ";
    }

    return 0;
}
