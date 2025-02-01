#include <bits/stdc++.h>
using namespace std;

void countVowelsConsonants(const string &str) {
    int vowels = 0, consonants = 0;
    for (char ch : str) {
        if (isalpha(ch)) {
            ch = tolower(ch);
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
                vowels++;
            else
                consonants++;
        }
    }
    cout << "Vowels: " << vowels << ", Consonants: " << consonants << endl;
}

int main() {
    string str = "Hello World";
    countVowelsConsonants(str);
    return 0;
}
