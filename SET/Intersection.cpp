#include <iostream>
#include <set>
using namespace std;

int main() {
    set<int> s1 = {1, 2, 3};
    set<int> s2 = {3, 4, 5};
    set<int> intersectionSet;

    for (auto it : s1) {
        if (s2.count(it)) {
            intersectionSet.insert(it);
        }
    }

    for (auto it : intersectionSet) {
        cout << it << " ";
    }
    return 0;
}
