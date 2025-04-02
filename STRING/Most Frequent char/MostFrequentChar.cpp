#include <bits/stdc++.h>
using namespace std;

char mostFrequentChar(const string& str) {
    unordered_map<char, int> charCount; // Map to store character counts
    char mostFrequent = str[0]; 
    int maxCount = 0; // Variable to track the maximum count

    // Count the frequency of each character
    for (char ch : str) {
        charCount[ch]++; 
    }
    for (char ch : str) {
       
        if (charCount[ch] > maxCount) {
            maxCount = charCount[ch]; 
            mostFrequent = ch; 
        }
    }
    return mostFrequent; 
}

int main() {
    string str;
    cout << "Enter a string: ";
    cin >> str;

    char result = mostFrequentChar(str);
    cout << "The most frequent character is: " << result << endl;
    return 0;
}
// time complexity: O(n) where n is the length of the string
// space complexity: O(n) for the unordered_map
