#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> allPairs(int x, const vector<int> &arr1) {
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
    int x, n1;
    cout << "Enter the target sum: ";
    cin >> x;

    cout << "Enter the number of elements in the first array: ";
    cin >> n1;
    vector<int> arr1(n1);
    cout << "Enter elements of the first array: ";
    for (int i = 0; i < n1; i++) {
        cin >> arr1[i];
    }
    
    vector<vector<int>> result = allPairs(x, arr1);

    cout << "Pairs with sum " << x << " are:\n";
    for (int i = 0; i < result.size(); i++) {
        cout << result[i][0] << " " << result[i][1] << endl;
    }
    
    return 0;
}
