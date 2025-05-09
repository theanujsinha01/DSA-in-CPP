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
// Time Complexity: O(n), where n is the number of words in the string. Each word is processed once.
// Space Complexity: O(m), where m is the number of unique words in the string. The unordered_map stores the frequency of each word.
