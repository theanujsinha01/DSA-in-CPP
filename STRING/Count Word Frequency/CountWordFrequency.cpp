#include <bits/stdc++.h>
using namespace std;

void countWordFrequency(const string& str) {
    unordered_map<string, int> wordCount; // Map to store word frequencies
    istringstream ss(str); // Stream to read words from the string
    string word;

    // Read each word from the string and count its frequency
    while (ss >> word) {
        wordCount[word]++; 
    }

    // Print the word frequencies
    cout << "Word Frequencies:" << endl;
    for ( auto it : wordCount) {
        cout << it.first << ": " << it.second << endl; // Print each word and its count
    }
}

int main() {
    string input;
    cout << "Enter a string: ";
    getline(cin, input); // Read the input string

    countWordFrequency(input); // Count and display word frequencies

    return 0;
}
