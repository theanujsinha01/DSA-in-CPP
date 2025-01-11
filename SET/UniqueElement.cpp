#include <iostream>
#include <set>
#include <vector>
using namespace std;

int main() {
    vector<int> arr = {1, 2, 2, 3, 3, 4, 5};
    set<int> uniqueElements(arr.begin(), arr.end());
    cout << "Number of unique elements: " << uniqueElements.size();
    return 0;
}
