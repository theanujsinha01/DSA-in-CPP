#include <bits/stdc++.h>
using namespace std;

// Function to check if a string is an isogram or not
bool isIsogram(string s) {
    unordered_map<char, int> mp;
    for (auto ch : s) {
        mp[ch]++;
    }
    for (auto ch : mp) {
        // If any character appears more than once, return false
        if ( ch.second > 1) return false;
    }
    return true; // All characters are unique
}

int main() {
    string s;
    cout << "Enter a string: ";
    cin >> s;

    // Check if the string is an isogram
    if (isIsogram(s)) {
        cout << "The string is an isogram." << endl;
    } else {
        cout << "The string is not an isogram." << endl;
    }

    return 0;
}
