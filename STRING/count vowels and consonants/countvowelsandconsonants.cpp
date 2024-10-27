#include <iostream>
using namespace std;

int main() {
    string str;
    int vowels = 0, consonants = 0;

    cout << "Enter a string: ";
    getline(cin, str);  // Input the string including spaces

    // Loop through each character in the string
    for (int i = 0; i < str.length(); i++) {
        char ch = tolower(str[i]);  // Convert to lowercase to make comparison easier

        // Check if the character is a vowel
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
            vowels++;
        }
        // Check if the character is a consonant (i.e., a letter that's not a vowel)
        else if (ch >= 'a' && ch <= 'z') {
            consonants++;
        }
    }

    cout << "Number of vowels: " << vowels << endl;
    cout << "Number of consonants: " << consonants << endl;

    return 0;
}
