#include <bits/stdc++.h>
using namespace std;

map<string, int> wordCount(string & sentence) {
  
    map<string, int> wordCount;
    stringstream ss(sentence);
    string word;

    while (ss >> word) wordCount[word]++;
    for (auto p : wordCount) cout << p.first << ": " << p.second << endl;
    return wordCount;
}

int main() {
 
    string sentence = "hello world hello everyone hello world";
    map<string, int> ans = wordCount(sentence);

    cout << "Word Frequency:\n";
    for (auto p : ans) cout << p.first << ": " << p.second << endl;
    return 0;
}
