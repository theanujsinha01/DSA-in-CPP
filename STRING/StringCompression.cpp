#include <bits/stdc++.h>
using namespace std;

string compress(vector<char>& str) {
    map<char, int> freq;
    for (char ch : str) freq[ch]++;

    string result;
    for (auto it : freq) {
        result += it.first;
        if (it.second > 1) result += to_string(it.second);
    }
    return result;
}
int main() {
    vector<char> str = {'a', 'a', 'b', 'b', 'c', 'c', 'e', 'e'};
    string compressedStr = compress(str);
    cout << "Compressed string: " << compressedStr << endl;
    return 0;
}
// time complexity: O(n)
// space complexity: O(n)

// --------------------------------------------------
// Pseudo code to compress a character array into a string with character counts

// Start

// Input list of characters str
// Initialize empty map freq to store character frequencies

// For each character ch in str:
//     Increment freq[ch] by 1

// Initialize empty string result
// For each (character, count) pair in freq:
//     Append character to result
//     If count > 1:
//         Append count to result as a string

// Return result

// End
// --------------------------------------------------
