#include <bits/stdc++.h>
using namespace std;

string reverseWords( string& str) {
    stack<string> wordStack; 
    string word;
    stringstream ss(str); // Create a string stream from the input string

    // Extract words from the string stream and push them onto the stack
    while (ss >> word) {
        wordStack.push(word); // Push each word onto the stack
    }

    string reversedStr;
    
   
    while (wordStack.size() > 0) {
        reversedStr += wordStack.top(); // Add the top word to the result
        wordStack.pop(); 
        if (wordStack.size() > 0) {
            reversedStr += " "; // Add space between words if the stack is not empty
        }
    }

    return reversedStr; 
}

int main() {
    string str;
    cout << "Enter a string: ";
    getline(cin, str); 

    string result = reverseWords(str);
    cout << "Reversed string: " << result << endl;

    return 0;
}
