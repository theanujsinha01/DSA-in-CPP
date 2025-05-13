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
// // Time Complexity: O(n), where n is the number of characters in the string. Each character is processed once.
// // Space Complexity: O(m), where m is the number of words in the string. The space used to store the words in the vector.
