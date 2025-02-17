#include <bits/stdc++.h>
using namespace std;

bool hasUniqueCharacters(const string& str) {
   map<char, int> charMap;
    for (char ch : str) {
        charMap[ch]++;
    }
    for (auto it :charMap) {
        if(it.second > 1){
            return false;
        }
    }
    return true; 
}

int main() {
    string input;
    cout << "Enter a string: ";
    getline(cin, input);

    if (hasUniqueCharacters(input)) {
        cout << "The string has all unique characters." << endl;
    } else {
        cout << "The string does not have all unique characters." << endl;
    }

    return 0;
}
