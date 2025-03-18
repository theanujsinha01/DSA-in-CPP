#include <bits/stdc++.h>
using namespace std;

vector<int> nearestSmallerToRight(vector<int>& arr) {
    int n = arr.size();
    vector<int> res(n, -1); // Initialize result with -1
    stack<int> st;

    for (int i = n - 1; i >= 0; i--) {
        while (st.size()>0 && st.top() >= arr[i]) {
            st.pop();
        }
        if (st.size()>0) {
            res[i] = st.top();
        }
        st.push(arr[i]);
    }
    return res;
}

int main() {
    vector<int> arr = {4, 5, 2, 10, 8};
    vector<int> result = nearestSmallerToRight(arr);

    for (auto it : result) {
        cout << it << " ";
    }

    return 0;
}
