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
    string str = "geeksforgeeks"; // Example string
    char result = mostFrequentChar(str);
    cout << "The most frequent character is: " << result << endl;
    return 0;
}
// time complexity: O(n) where n is the length of the string
// space complexity: O(n) for the unordered_map

// --------------------------------------------------
// Pseudo code to find the most frequent character in a string

// Start

// Input string str
// Initialize empty map charCount to store character frequencies
// Set mostFrequent = first character of str
// Set maxCount = 0

// For each character ch in str:
//     Increment charCount[ch] by 1

// For each character ch in str:
//     If charCount[ch] > maxCount:
//         Set maxCount = charCount[ch]
//         Set mostFrequent = ch

// Return mostFrequent

// End
// --------------------------------------------------
