#include <bits/stdc++.h>
using namespace std;

string reverseWords(const string& str) {
    stack<string> wordStack; // Stack to store words
    string word;
    istringstream stream(str); // Create a string stream from the input string

    // Extract words from the string stream and push them onto the stack
    while (stream >> word) {
        wordStack.push(word); // Push each word onto the stack
    }

    // Prepare the result string
    string reversedStr;
    
    // Pop words from the stack to get them in reverse order
    while (!wordStack.empty()) {
        reversedStr += wordStack.top(); // Add the top word to the result
        wordStack.pop(); // Remove the top word from the stack
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
