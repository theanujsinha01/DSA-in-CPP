#include <bits/stdc++.h>
using namespace std;

void countVowelsConsonants(const string &s) {
    int v = 0, c = 0;
    for (char ch : s) {
        ch = tolower(ch);
        if (isalpha(ch)) {
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') 
                v++;
            else 
                c++;
        }
    }
    cout << "Vowels: " << v << ", Consonants: " << c << endl;
}

int main() {
    string str;
    cout << "Enter a string: ";
    getline(cin, str);
    countVowelsConsonants(str);
    return 0;
}

// Time Complexity: O(n), where n is the length of the string. Each character is processed once.
// Space Complexity: O(1), as we are using a constant amount of space for the counters and not using any additional data structures that grow with input size.
