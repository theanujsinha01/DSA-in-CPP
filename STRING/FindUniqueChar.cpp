#include <bits/stdc++.h>
using namespace std;

char firstUniqChar(string s) {
    unordered_map<char, int> freq;
    for (char ch : s) freq[ch]++;
    for (char ch : s) if (freq[ch] == 1) return ch;
    return '\0';
}

int main() {
    string str;
    cout << "Enter a string: ";
    getline(cin, str);
    char result = firstUniqChar(str);
    cout << (result ? "First non-repeating character: " + string(1, result) : "No unique character") << endl;
    return 0;
}
// time complexity: O(n), where n is the length of the string s.
// space complexity: O(1), as the frequency map will have a maximum of 26 entries for lowercase letters.

// --------------------------------------------------
// Pseudo code to find the first non-repeating character in a string

// Start

// Input string s
// Initialize empty map freq to store character frequencies

// For each character ch in s:
//     Increment freq[ch] by 1

// For each character ch in s:
//     If freq[ch] is equal to 1:
//         Return ch  // First unique character found

// Return null character or indicate no unique character found

// End
// --------------------------------------------------
