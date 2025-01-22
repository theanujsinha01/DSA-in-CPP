#include <bits/stdc++.h>
using namespace std;

int main() {
    string sentence = "the quick brown fox jumps over the lazy dog";
    map<string, int> wordCount;
    stringstream ss(sentence);
    string word;

    while (ss >> word) wordCount[word]++;
    for (auto p : wordCount) cout << p.first << ": " << p.second << endl;
    return 0;
}
