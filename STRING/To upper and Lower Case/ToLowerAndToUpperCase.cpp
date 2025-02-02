#include <bits/stdc++.h>
using namespace std;

string toUpperCase(string str) { 
    for (auto & ch : str) {  // Use reference (&) to modify the original string
        ch = toupper(ch);
    }
    return str;
}

string toLowerCase(string str) { 
    for (auto & ch : str) {  // Use reference (&) to modify the original string
        ch = tolower(ch);
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
