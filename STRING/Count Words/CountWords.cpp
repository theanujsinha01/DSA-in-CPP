#include <bits/stdc++.h>
using namespace std;

int countWords( string& str) {
    stringstream ss(str); // Create a stringstream object
    string word;
    int count = 0;

    while (ss >> word) { // Extract words from the string
        count++;
    }

    return count;
}

int main() {
    string str;
    cout << "Enter a string: ";
    getline(cin, str); // Read the entire line of input

    int wordCount = countWords(str);
    cout << "Total words: " << wordCount << endl;

    return 0;
}
