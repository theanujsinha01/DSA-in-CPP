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
