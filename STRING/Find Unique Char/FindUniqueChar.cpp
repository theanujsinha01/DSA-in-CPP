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
// Time Complexity: O(n), where n is the length of the string. Each character is processed twice: once for counting and once for finding the first unique character.
// Space Complexity: O(n), where n is the number of unique characters in the string. The unordered_map stores the frequency of each character.