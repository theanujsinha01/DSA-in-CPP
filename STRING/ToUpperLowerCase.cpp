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
