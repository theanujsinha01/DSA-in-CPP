#include <bits/stdc++.h>
using namespace std;

vector<int> nextGreaterToRight(vector<int>& arr) {
    int n = arr.size();
    vector<int> result;  // To store the results
    stack<int> s;  // Stack to store elements

    for (int i = n - 1; i >= 0; i--) {
        // Pop elements from stack until we find a greater element or stack is empty
      while (!s.empty() && s.top() <= arr[i]) {
            s.pop(); 
        }
        
        // If stack is empty, no greater element, otherwise it's the stack's top
        if (s.empty()) {
            result.push_back(-1);
        } else {
            result.push_back(s.top());
        }
        
        // Push the current element to the stack
        s.push(arr[i]);
    }

    reverse(result.begin(), result.end());
    return result;
}

int main() {
    vector<int> arr = {4, 5, 2, 10, 8};
    vector<int> result = nextGreaterToRight(arr);

    for (auto it : result) {
        cout << it << " ";
    }

    return 0;
}
