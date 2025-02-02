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
