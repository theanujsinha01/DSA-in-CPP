#include <bits/stdc++.h>
using namespace std;

string toUpperCase(string str) { 
    for (int i = 0; i < str.size(); i++) {
        if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] -= 32; // Convert to uppercase
        }
    }
    return str;
}

string toLowerCase(string str) { 
    for (int i = 0; i < str.size(); i++) {
        if (str[i] >= 'A' && str[i] <= 'Z') {
            str[i] += 32; 
        }
    }
    return str;
}

int main() {
    string str;
    cout << "Enter a string: ";
    getline(cin, str); 
    string upperStr = toUpperCase(str); 
    string lowerStr = toLowerCase(str); 

    cout << "Uppercase: " << upperStr << endl; 
    cout << "Lowercase: " << lowerStr << endl; 

    return 0;
}
// time complexity: O(n) where n is the length of the string
// space complexity: O(1) as we are modifying the string in place


// --------------------------------------------------
// Pseudo code to convert a string to uppercase and lowercase

// Start

// Input string str

// Function toUpperCase(str):
//     For i from 0 to length of str - 1:
//         If str[i] is a lowercase letter (between 'a' and 'z'):
//             Subtract 32 from str[i] to convert to uppercase
//     Return str

// Function toLowerCase(str):
//     For i from 0 to length of str - 1:
//         If str[i] is an uppercase letter (between 'A' and 'Z'):
//             Add 32 to str[i] to convert to lowercase
//     Return str

// Call toUpperCase with input str and store result in upperStr
// Call toLowerCase with input str and store result in lowerStr

// Output upperStr
// Output lowerStr

// End
// --------------------------------------------------
