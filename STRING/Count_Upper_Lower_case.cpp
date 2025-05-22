#include <bits/stdc++.h>
using namespace std;

void countCases(string &str) {
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
// time complexity: O(n), where n is the length of the string str.
// space complexity: O(1), as we are using a constant amount of extra space for the upper and lower counters.


// --------------------------------------------------
// Pseudo code to count uppercase and lowercase letters in a string

// Start

// Input string str
// Set upper = 0
// Set lower = 0

// For each character ch in str:
//    If ch is an uppercase letter:
//        Increment upper by 1
//    Else if ch is a lowercase letter:
//        Increment lower by 1

// Output "Uppercase: ", upper, ", Lowercase: ", lower

// End
// --------------------------------------------------
