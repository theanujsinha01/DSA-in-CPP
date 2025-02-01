#include <bits/stdc++.h>
using namespace std;

string longestWord(const string &str) {
    istringstream stream(str);
    string word, longest;
    
    while (stream >> word) {
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
