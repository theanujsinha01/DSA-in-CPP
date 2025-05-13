#include <bits/stdc++.h>
using namespace std;

vector<int> stockSpan(vector<int>& arr) {
    int n = arr.size();
    vector<int> result;  // To store the results
    stack<pair<int, int>> s;  // Stack to store elements

    // Traverse from right to left
    for (int i = 0; i < n; i++) {
        // Pop elements from stack until we find a greater element or stack is empty
        while (!s.empty() && s.top().first <= arr[i]) {
            s.pop(); 
        }
        
        // If stack is empty, no greater element, otherwise it's the stack's top
        if (s.empty()) {
            result.push_back(-1);
        } else {
            result.push_back(s.top().second);
        }
        
        // Push the current element to the stack
        s.push({arr[i], i});
    }
    for(int i=0; i< result.size(); i++){
        result[i] = i - result[i];
    }

    return result;
}

int main() {
    vector<int> arr = {100, 80, 60, 70, 60,75,85};
    vector<int> result = stockSpan(arr);  

    for (auto it : result) {
        cout << it << " ";
    }

    return 0;
}
