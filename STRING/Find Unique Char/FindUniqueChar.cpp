#include <bits/stdc++.h>
using namespace std;


    char firstUniqChar(string s) {
        unordered_map<char, int> charCount;

        // Count the frequency of each character
        for (char ch : s) {
            charCount[ch]++;
        }

        // Find the first character with a count of 1
        for (int i = 0; i < s.size(); i++) {
            if (charCount[s[i]] == 1) {
                return s[i]; // Return the index of the first non-repeating character
            }
        }

        return '\0'; 
    }


int main() {

    string str;

    cout << "Enter a string: ";
    getline(cin, str); // Use getline to allow spaces in input

    char result = firstUniqChar(str);

    if (result != '\0') {
        cout << "The index of the first non-repeating character is: " << result << endl;
    } else {
        cout << "There are no non-repeating characters." << endl;
    }

    return 0;
}
