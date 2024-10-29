#include <bits/stdc++.h>
using namespace std;

char firstRepeatedChar(const string& str) {
    unordered_map<char, int> charCount;

    // Traverse the string and count the occurrence of each character
    for (char ch : str) {
        charCount[ch]++; // Increment count for the character
        // If the character occurs more than once, return it
        if (charCount[ch] > 1) {
            return ch;
        }
    }
    
    return '\0';
}

int main() {
    string str;
    cout << "Enter a string: ";
    cin >> str;

    char result = firstRepeatedChar(str);
    if (result != '\0') {
        cout << "The first repeated character is: " << result << endl;
    } else {
        cout << "No repeated characters found." << endl;
    }

    return 0;
}
