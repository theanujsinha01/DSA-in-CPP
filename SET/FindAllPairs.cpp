#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> allPairs(int x, vector<int> &arr1) {
    set<int> st;
    set<pair<int, int>> uniquePairs;
    for (int i = 0; i < arr1.size(); i++) {
        int finding = x - arr1[i];
        if (st.count(finding)) {
            uniquePairs.insert({min(arr1[i], finding), max(arr1[i], finding)});
        }
        st.insert(arr1[i]);
    }
    vector<vector<int>> ans;
    for (auto it : uniquePairs) {
        ans.push_back({it.first, it.second});
    }
    return ans;
}

int main() {
    vector<int> arr1 = {1, 2, 3, 4, 5};
    int x = 5;
    vector<vector<int>> ans = allPairs(x, arr1);
    cout << "All pairs with sum " << x << ":\n";
    for (auto pair : ans) {
        cout << "(" << pair[0] << ", " << pair[1] << ")\n";
    }
    return 0;
}
