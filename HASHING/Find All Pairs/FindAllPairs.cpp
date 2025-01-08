#include <bits/stdc++.h>
using namespace std;

vector<pair<int, int>> allPairs(int x, const vector<int> &arr1, const vector<int> &arr2) {
    unordered_map<int, int> mp;
    for (auto it : arr2) {
        mp[it]++;
    }
    
    vector<pair<int, int>> ans;
    for (int i = 0; i < arr1.size(); i++) {
        int finding = x - arr1[i];
        if (mp.count(finding)) {
            ans.push_back({arr1[i], finding});
        }
    }
    
    sort(ans.begin(), ans.end());
    return ans;
}

int main() {
    int x, n1, n2;
    cout << "Enter the target sum: ";
    cin >> x;

    cout << "Enter the number of elements in the first array: ";
    cin >> n1;
    vector<int> arr1(n1);
    cout << "Enter elements of the first array: ";
    for (int i = 0; i < n1; i++) {
        cin >> arr1[i];
    }

    cout << "Enter the number of elements in the second array: ";
    cin >> n2;
    vector<int> arr2(n2);
    cout << "Enter elements of the second array: ";
    for (int i = 0; i < n2; i++) {
        cin >> arr2[i];
    }

    vector<pair<int, int>> result = allPairs(x, arr1, arr2);

    cout << "Pairs with sum " << x << " are:\n";
    for ( auto it : result) {
        cout << "(" << it.first << ", " << it.second << ")\n";
    }

    return 0;
}
