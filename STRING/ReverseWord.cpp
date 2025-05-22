#include <bits/stdc++.h>
using namespace std;

string reverseWords( string& str) {
    
    string word;
    stringstream ss(str); 
    vector<string>reversedStr;
    
    while (ss >> word) {
        reversedStr.push_back(word);
    }
    str.clear();
    for(int i = reversedStr.size() - 1 ; i>=0; i--){
        str = str + reversedStr[i] + " ";
    }
    str.pop_back();
    return str; 
}

int main() {
    string str;
    cout << "Enter a string: ";
    getline(cin, str); 

    string result = reverseWords(str);
    cout << "Reversed string: " << result << endl;

    return 0;
}
// time complexity: O(n)
// space complexity: O(n)


// --------------------------------------------------
// Pseudo code to reverse the order of words in a string

// Start

// Input string str
// Initialize empty string word
// Create string stream from str
// Initialize empty list reversedStr

// While there is a word to read from the stream:
//     Add word to reversedStr list

// Clear str
// Loop from the end of reversedStr to the beginning:
//     Append each word to str followed by a space

// Remove the trailing space from str

// Return str

// End
// --------------------------------------------------
