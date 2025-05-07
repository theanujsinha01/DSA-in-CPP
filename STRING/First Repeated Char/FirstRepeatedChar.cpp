#include <bits/stdc++.h>
using namespace std;

char firstRepeatedChar(const string& str) {
    unordered_map<char, int> charCount;

    // Traverse the string and count the occurrence of each character
    for (char ch : str) {
        charCount[ch]++; 
    }
    for (char ch : str) {
        if (charCount[ch] > 1) {
            return ch;  // Return the first repeated character
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
