#include <bits/stdc++.h>
using namespace std;

bool hasUniqueCharacters(const string& str) {
    unordered_set<char> charSet; // Set to store unique characters

    for (char ch : str) {
        // If character is already in the set, it's not unique
        if (charSet.find(ch) != charSet.end()) {
            return false; 
        }
        charSet.insert(ch);
    }

    return true; 
}

int main() {
    string input;
    cout << "Enter a string: ";
    getline(cin, input);

    if (hasUniqueCharacters(input)) {
        cout << "The string has all unique characters." << endl;
    } else {
        cout << "The string does not have all unique characters." << endl;
    }

    return 0;
}
