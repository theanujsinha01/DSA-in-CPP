#include <bits/stdc++.h>
using namespace std;

int countWords( string& str) {
    stringstream ss(str); // Create a stringstream object
    string word;
    vector<string> words; 

    while (ss >> word) {
        words.push_back(word);
    }
    return words.size(); 
}

int main() {
    string str;
    cout << "Enter a string: ";
    getline(cin, str); // Read the entire line of input

    int wordCount = countWords(str);
    cout << "Total words: " << wordCount << endl;
    return 0;
}
// time complexity: O(n), where n is the number of words in the input string.
// space complexity: O(n), where n is the number of unique words in the input string.


// --------------------------------------------------
// Pseudo code to count the number of words in a string

// Start

// Input string str
// Initialize empty list words
// Create a string stream from str

// While there is a word to read from the stream:
//     Add the word to the words list

// Set wordCount = size of words list
// Output "Total words: ", wordCount

// End
// --------------------------------------------------
