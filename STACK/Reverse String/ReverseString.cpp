#include <bits/stdc++.h>
using namespace std;

string reverseString( string& str) {
    stack<char> s;

    // Push each character of the string onto the stack
    for (char ch : str) {
        s.push(ch);
    }

    // Pop each character from the stack and append to the reversed string
    string reversed = "";
    while (s.size()>0) {
        reversed = reversed + s.top(); // Get the top character
        s.pop();             // Remove the top character
    }

    return reversed;
}

int main() {
    string str;

    cout << "Enter a string: ";
    getline(cin, str); // Get the entire line of input

    string reversedStr = reverseString(str);

    cout << "Reversed string: " << reversedStr << endl;

    return 0;
}
