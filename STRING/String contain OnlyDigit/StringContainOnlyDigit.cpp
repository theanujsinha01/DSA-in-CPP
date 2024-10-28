#include <bits/stdc++.h>
using namespace std;

bool isOnlyDigits(const string& str) {
    for (char ch : str) {
        // Check if the character is not between '0' and '9'
        if (ch < '0' || ch > '9') {
            return false; // Return false if any character is not a digit
        }
    }
    return true; // Return true if all characters are digits
}

int main() {
    string str;
    cout << "Enter a string: ";
    cin >> str;

    if (isOnlyDigits(str)) {
        cout << "The string contains only digits." << endl;
    } else {
        cout << "The string contains non-digit characters." << endl;
    }

    return 0;
}
