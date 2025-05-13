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
// Time Complexity: O(n), where n is the length of the string. Each character is processed twice: once for counting and once for finding the first non-repeated character.
// Space Complexity: O(n), where n is the number of unique characters in the string. The unordered_map stores the frequency of each character.
