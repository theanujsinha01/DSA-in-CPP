#include <iostream>
#include <set>
#include <vector>
using namespace std;

int main() {
    vector<int> arr = {1, 2, 2, 3, 3, 4};
    set<int> s(arr.begin(), arr.end());

    for (int x : s) {
        cout << x << " ";
    }
    return 0;
}
