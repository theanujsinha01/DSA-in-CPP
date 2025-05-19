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
// time complexity: O(n) where n is the number of words in the sentence
// space complexity: O(n) for the vector storing words
