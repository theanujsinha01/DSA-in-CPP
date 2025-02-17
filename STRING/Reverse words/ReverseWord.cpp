#include <bits/stdc++.h>
using namespace std;

string reverseWords( string& str) {
    
    string word;
    stringstream ss(str); // Create a string stream from the input string
    vector<string>reversedStr;
    // Extract words from the string stream and push them onto the stack
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
