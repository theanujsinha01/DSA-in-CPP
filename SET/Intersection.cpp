#include <bits/stdc++.h>
using namespace std;

set<int> intersection(set<int> s1, set<int> s2) {
    set<int> result;
    for (auto it : s1) {
        if (s2.count(it)) {
            result.insert(it);
        }
    }
    return result;
}

int main() {
    set<int> s1 = {1, 2, 3, 5};
    set<int> s2 = {3, 4, 5};
    set<int> ans = intersection(s1, s2);
    for (auto it : ans) {
        cout << it << " ";
    }
    return 0;
}
// time complexity: O(n + m) where n and m are the sizes of the two sets
// space complexity: O(n) where n is the size of the result set
