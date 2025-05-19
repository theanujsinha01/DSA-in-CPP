#include <iostream>
#include <unordered_map>
using namespace std;

char firstNonRepeating(string &str) {
    unordered_map<char, int> freq;
    for (char c : str) freq[c]++;
    for (char c : str)
        if (freq[c] == 1) return c;
    return '\0'; // No non-repeating char
}

int main() {
    string str = "wswiss";
    char ans = firstNonRepeating(str);

    if (ans != '\0')
        cout << "First non-repeating character: " << ans << endl;
    else
        cout << "No non-repeating character found." << endl;

    return 0;
}
// Time complexity: O(n) for counting and O(n) for finding the first non-repeating character, total O(n)
// Space complexity: O(1) for the frequency map (limited to 256 characters)


//...............................................................................
// Pseudocode to find first non-repeating character in a string

// Start

// Input: string str
// Output: first non-repeating character or null if none

// Create empty frequency map freq

// For each character c in str:
//    Increase freq[c] by 1

// For each character c in str:
//    If freq[c] == 1:
//       Return c

// Return null (no non-repeating character found)

// End
//...............................................................................
