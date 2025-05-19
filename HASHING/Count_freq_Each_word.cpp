#include <bits/stdc++.h>
using namespace std;

map<string, int> wordCount(string & sentence) {
  
    map<string, int> wordCount;
    stringstream ss(sentence);
    string word;

    while (ss >> word) wordCount[word]++;
    for (auto p : wordCount) cout << p.first << ": " << p.second << endl;
    return wordCount;
}

int main() {
 
    string sentence = "hello world hello everyone hello world";
    map<string, int> ans = wordCount(sentence);

    cout << "Word Frequency:\n";
    for (auto p : ans) cout << p.first << ": " << p.second << endl;
    return 0;
}

// time complexity: O(n) where n is the number of words in the sentence
// space complexity: O(n) for the map storing word frequencies


//...............................................................................
// Pseudocode for counting frequency of words in a sentence

// Start

// Input: sentence (string)
// Output: map wordCount with each word and its frequency

// Initialize empty map wordCount
// Split sentence into words using space

// For each word in sentence:
//    wordCount[word] = wordCount[word] + 1

// For each word in wordCount:
//    Print word and wordCount[word]

// End
//...............................................................................
