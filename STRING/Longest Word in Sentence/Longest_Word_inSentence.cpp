#include <bits/stdc++.h>
using namespace std;

string longestWord(const string &str) {
    stringstream ss(str);
    string word, longest;
    vector<string> words;
    
    while (ss >> word) {
        words.push_back(word);
    }

    for(int i = 0; i < words.size(); i++) {
        if (words[i].length() > longest.length()) {
            longest = words[i];
        }
    }
    return longest;
}

int main() {
    string str = "Find the longest word in this sentence.";
    cout << "Longest word: " << longestWord(str) << endl;
    return 0;
}
// Time Complexity: O(n), where n is the number of characters in the string. Each character is processed once.
// Space Complexity: O(m), where m is the number of words in the string. The space used to store the words in the vector.
