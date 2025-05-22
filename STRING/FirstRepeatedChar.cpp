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
// time complexity: O(n), where n is the length of the string str.
// space complexity: O(1), as the frequency map will have a maximum of 26 entries for lowercase letters.

// --------------------------------------------------
// Pseudo code to find the first repeated character in a string

// Start

// Input string str
// Initialize empty map charCount to store frequency of each character

// For each character ch in str:
//     Increment charCount[ch] by 1

// For each character ch in str:
//     If charCount[ch] > 1:
//         Return ch  // First repeated character found

// Return null character to indicate no repeated characters found

// End
// --------------------------------------------------
