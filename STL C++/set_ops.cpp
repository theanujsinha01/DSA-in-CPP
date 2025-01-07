#include <iostream>
#include <set>
using namespace std;

int main() {
    set<int> s = {5, 3, 8, 6, 2};

    // Insert new elements
    s.insert(7);
    s.insert(1);

    // Print Set elements
    cout << "Set elements: ";
    for (int num : s) cout << num << " ";
    cout << endl;

    // Erase an element
    s.erase(3);
    cout << "After erase(3): ";
    for (int num : s) cout << num << " ";
    cout << endl;

    // Check if an element exists
    if (s.count(8)) {
        cout << "Found 8 in the set." << endl;
    } else {
        cout << "8 not found." << endl;
    }

    // Get the size of the set
    cout << "Size of the set: " << s.size() << endl;

    return 0;
}
