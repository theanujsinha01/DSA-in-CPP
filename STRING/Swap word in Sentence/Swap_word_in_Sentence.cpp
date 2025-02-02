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
        str += w + " ";
    }
    str.pop_back();  // Remove last space
}

int main() {
    string str = "Hello World from C++";
    swapWords(str, 0, 3);
    cout << "After swap: " << str << endl;
    return 0;
}
