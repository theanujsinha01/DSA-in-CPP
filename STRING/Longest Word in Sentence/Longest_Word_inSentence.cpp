#include <bits/stdc++.h>
using namespace std;

string longestWord(const string &str) {
    stringstream ss(str);
    string word, longest;
    
    while (ss >> word) {
        if (word.length() > longest.length()) {
            longest = word;
        }
    }
    return longest;
}

int main() {
    string str = "Find the longest word in this sentence.";
    cout << "Longest word: " << longestWord(str) << endl;
    return 0;
}
