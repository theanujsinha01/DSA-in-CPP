#include <iostream>
#include <map>
using namespace std;

int main() {
    map<int, string> m;

    // Insert key-value pairs
    m[1] = "One";
    m[2] = "Two";
    m[3] = "Three";
    m[4] = "Four";
    m[5] = "Five";

    // Print map elements
    cout << "Map elements: ";
    for (auto p : m) {
        cout << p.first << ":" << p.second << " ";
    }
    cout << endl;

    // Update a value
    m[2] = "Changed";
    cout << "After updating key 2: ";
    for (auto p : m) {
        cout << p.first << ":" << p.second << " ";
    }
    cout << endl;

    // Remove key-value pair
    m.erase(3);
    cout << "After erase key 3: ";
    for (auto p : m) {
        cout << p.first << ":" << p.second << " ";
    }
    cout << endl;
    
    // Check if a key exists
    int key = 5;  // Missing semicolon here
    if (m.count(key)) {
        cout << "Key " << key << " exists in the map." << endl;
        cout << "Value: " << m[key] << endl;
    } else {
        cout << "Key " << key << " does not exist." << endl;
    }

    return 0;
}
