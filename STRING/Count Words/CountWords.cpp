#include <bits/stdc++.h>
using namespace std;

bool isValidWord( string& word) {
    int n = word.size();
    bool hyphenUsed = false;  
    bool punctuationUsed = false; 

    for (int i = 0; i < n; ++i) {
        if (isdigit(word[i])) {
            return false; // Word contains a digit
        }
        if (word[i] == '-') {
            // Check if hyphen is used correctly
            if (hyphenUsed || i == 0 || i == n - 1 || !islower(word[i - 1]) || !islower(word[i + 1])) {
                return false;
            }
            hyphenUsed = true; // Mark hyphen as used
        }
        if (word[i] == '!' || word[i] == '.' || word[i] == ',') {
            // Check if punctuation is used correctly
            if (punctuationUsed || i != n - 1) {
                return false;
            }
            punctuationUsed = true; // Mark punctuation as used
        }
    }
    return true; // Word is valid
}

int countValidWords( string& sentence) {
    istringstream ss(sentence);
    string word;
    int validCount = 0;

    // Extract words from the sentence
    while (ss >> word) {
        if (isValidWord(word)) {
            validCount++; 
        }
    }
    return validCount; 
}

int main() {
    string sentence;
    cout << "Enter a sentence: ";
    getline(cin, sentence);

    int result = countValidWords(sentence); 
    cout << "Number of valid words: " << result << endl; 

    return 0;
}
