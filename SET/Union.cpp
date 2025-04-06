#include <bits/stdc++.h>
using namespace std;

set<int> union_sets(set<int> s1, set<int> s2) {
    set<int> result = s1;
    result.insert(s2.begin(), s2.end());
    return result;
}

int main() {
    set<int> s1 = {1, 2, 3};
    set<int> s2 = {3, 4, 5};
    set<int> ans = union_sets(s1, s2);
    for (auto it : ans) {
        cout << it << " ";
    }
    return 0;
}
