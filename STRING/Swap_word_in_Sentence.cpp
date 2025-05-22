#include <bits/stdc++.h>
using namespace std;

void swapWords(string &str, int index1, int index2) {
    stringstream ss(str);
    vector<string> words;
    string word;

    while (ss >> word) {
        words.push_back(word);
    }

    if (index1 < words.size() && index2 < words.size()) {
        swap(words[index1], words[index2]);
    }

    str.clear();
    for ( auto w : words) {
        str = str + w + " ";
    }
    str.pop_back();  // Remove last space
}

int main() {
    string str;
    getline(cin,str);
    swapWords(str, 2, 3);
    cout << "After swap: " << str << endl;
    return 0;
}
// time complexity: O(n) where n is the number of words in the sentence
// space complexity: O(n) for the vector storing words


// --------------------------------------------------
// Pseudo code to swap two words in a sentence by their indices

// Start

// Input string str
// Input indices index1 and index2

// Initialize empty list words
// Split str into words and store in words list

// If index1 and index2 are valid (within bounds of words list):
//     Swap the words at index1 and index2

// Clear str
// For each word w in words:
//     Append w followed by a space to str

// Remove the trailing space from str

// Output modified str

// End
// --------------------------------------------------
