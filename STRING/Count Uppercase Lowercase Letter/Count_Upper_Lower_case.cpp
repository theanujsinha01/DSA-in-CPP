#include <bits/stdc++.h>
using namespace std;

void countCases(const string &str) {
    int upper = 0, lower = 0;
    for (char ch : str) {
        if (isupper(ch)) 
            upper++;
        else if (islower(ch)) 
            lower++;
    }
    cout << "Uppercase: " << upper << ", Lowercase: " << lower << endl;
}

int main() {
    string str;
    cout << "Enter a string: ";
    getline(cin, str);  // Takes user input
    countCases(str);
    return 0;
}

// Time Complexity: O(n), where n is the length of the string. Each character is processed once.
// Space Complexity: O(1), as we are using a constant amount of space for the counters and not using any additional data structures that grow with input size.