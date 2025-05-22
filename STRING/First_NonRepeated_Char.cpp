#include <bits/stdc++.h>
using namespace std;

char firstNonRepeatedChar(const string &str) {
    unordered_map<char, int> count;
    for (char ch : str) count[ch]++;
    for (char ch : str) {
        if (count[ch] == 1) return ch;
    }
    return '\0';  // No non-repeated character
}

int main() {
    string str = "swiss";
    char result = firstNonRepeatedChar(str);
    if (result != '\0') cout << "First non-repeated character: " << result << endl;
    else cout << "No non-repeated character found" << endl;
    return 0;
}
// time complexity: O(n), where n is the length of the string str.
// space complexity: O(1), as the frequency map will have a maximum of 26 entries for lowercase letters.


// --------------------------------------------------
// Pseudo code to find the first non-repeated character in a string

// Start

// Input string str
// Initialize empty map count to store frequency of each character

// For each character ch in str:
//     Increment count[ch] by 1

// For each character ch in str:
//     If count[ch] equals 1:
//         Return ch  // First non-repeated character found

// Return null character to indicate no non-repeated character was found

// End
// --------------------------------------------------
