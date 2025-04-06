#include <bits/stdc++.h>
using namespace std;

set<int> remove_duplicates(const vector<int>& arr) {
    set<int> unique_elements(arr.begin(), arr.end());
    return unique_elements;
}

int main() {
    vector<int> arr = {1, 2, 2, 3, 3, 4};
    set<int> ans = remove_duplicates(arr);
    for (int x : ans) {
        cout << x << " ";
    }
    return 0;
}
// time complexity: O(n log n) where n is the size of the input array
// space complexity: O(n) where n is the size of the set
