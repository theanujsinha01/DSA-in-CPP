#include<bits/stdc++.h>
using namespace std;

vector<int> firstNegativeInWindow(int K, vector<int>& Arr, int N) {
    
    queue<int> negatives;  // To store the negative elements
    vector<int> result;    // To store the first negative in each window
    int idx = 0;
    while(idx < K) {
        if(Arr[idx] < 0) {
            negatives.push(Arr[idx]);
        }
        idx++;
    }
    for(int i=1; i<=N-K; i++) {
        if(negatives.size() > 0) {
            result.push_back(negatives.front());
        } else {
            result.push_back(0);
        }
        if(negatives.size() > 0 && negatives.front() == Arr[i-1]) {
            negatives.pop();
        }
        if(Arr[i+K-1] < 0) {
            negatives.push(Arr[i+K-1]);
        }
    }
    if(negatives.size() > 0) {
        result.push_back(negatives.front());
    } else {
        result.push_back(0);
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
