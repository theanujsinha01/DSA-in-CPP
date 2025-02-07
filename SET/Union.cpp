#include <iostream>
#include <set>
using namespace std;

int main() {
    set<int> s1 = {1, 2, 3};
    set<int> s2 = {3, 4, 5};

    set<int> unionSet(s1.begin(), s1.end());
    unionSet.insert(s2.begin(), s2.end());

    for (int x : unionSet) {
        cout << x << " ";
    }
    return 0;
}
