#include <bits/stdc++.h>
using namespace std;

string removeDuplicates(const string& str) {
    unordered_set<char> seen; // Set to track seen characters
    string result; // Result string to store characters without duplicates

    for (int i = 0; i<str.size(); i++) {
        // If the character has not been seen yet, add it to the result
        if (seen.find(str[i]) == seen.end()) {
            seen.insert(str[i]); // Mark this character as seen
            result = result + str[i]; // Append the character to the result
        }
    }

    return result;
}

int main() {
    string str;
    cout << "Enter a string: ";
    cin >> str;

    string result = removeDuplicates(str);
    cout << "String after removing duplicates: " << result << endl;

    return 0;
}
