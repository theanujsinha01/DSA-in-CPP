#include <bits/stdc++.h>
using namespace std;

string removeSpaces(const string& str) {
    string result; 
    for (char ch : str) {
        if (ch != ' ') { 
            result += ch; // Add it to the result
        }
    }
    return result; 
}

int main() {
    string str;
    cout << "Enter a string: ";
    getline(cin, str); // Read the input string

    string noSpaceStr = removeSpaces(str); // Call the function to remove spaces

    cout << "String without spaces: \"" << noSpaceStr << "\"" << endl; // Output the result

    return 0;
}
