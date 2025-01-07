#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> v = {10, 20, 30, 40, 50};

    // Add elements at the end
    v.push_back(60);
    cout << "After push_back(60): ";
    for (int num : v) cout << num << " ";
    cout << endl;

    // Remove last element
    v.pop_back();
    cout << "After pop_back(): ";
    for (int num : v) cout << num << " ";
    cout << endl;

    // Insert at specific position
    v.insert(v.begin() + 2, 25); // Insert 25 at index 2
    cout << "After insert(25) at index 2: ";
    for (int num : v) cout << num << " ";
    cout << endl;

    // Erase an element at specific position
    v.erase(v.begin() + 3); // Remove element at index 3
    cout << "After erase at index 3: ";
    for (int num : v) cout << num << " ";
    cout << endl;

    // Clear all elements
    v.clear();
    cout << "After clear(): ";
    for (int num : v) cout << num << " ";  // No elements
    cout << endl;

    return 0;
}
