#include <bits/stdc++.h>
using namespace std;

void countWordFrequency(const string& str) {
    unordered_map<string, int> wordCount;
    stringstream ss(str); 
    string word;
    vector<string> words; 

    while (ss >> word) {
        words.push_back(word); // Store the word in the vector
    }

    for (auto it : words) {
        wordCount[it]++; // Count the frequency of each word
    }

    for ( auto it : wordCount) {
        cout << it.first << ": " << it.second << endl;
    }
}

int main() {
    string input;
    cout << "Enter a string: ";
    getline(cin, input); // Read the input string
    countWordFrequency(input); // Count and display word frequencies

    return 0;
}
// time complexity: O(n), where n is the number of words in the input string.
// space complexity: O(n), where n is the number of unique words in the input string.


// --------------------------------------------------
// Pseudo code to count frequency of words in a string

// Start

// Input string str
// Initialize empty map wordCount to store word frequencies
// Initialize empty list words to store each word

// Split the string str into individual words using spaces
// For each word in str:
//     Add word to words list

// For each word in words:
//     Increment wordCount[word] by 1

// For each entry in wordCount:
//     Output word and its frequency

// End
// --------------------------------------------------
