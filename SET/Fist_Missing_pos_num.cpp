#include <iostream>
#include <set>
#include <vector>
using namespace std;

int main() {
    vector<int> arr = {3, 4, -1, 1};
    set<int> s(arr.begin(), arr.end());
    int missing = 1;
    while (s.count(missing)) missing++;
    cout << "First missing positive: " << missing;
    return 0;
}
