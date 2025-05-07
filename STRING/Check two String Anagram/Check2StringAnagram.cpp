
#include <bits/stdc++.h>
using namespace std;

bool areAnagrams(string str1, string str2) {
    // If lengths are not equal, they can't be anagrams
    if (str1.length() != str2.length()) {
        return false;
    }

    // Convert both strings to lowercase to ignore case
    transform(str1.begin(), str1.end(), str1.begin(), ::tolower);
    transform(str2.begin(), str2.end(), str2.begin(), ::tolower);

    // Sort both strings
    sort(str1.begin(), str1.end());
    sort(str2.begin(), str2.end());

    // Compare sorted strings
    return str1 == str2;
}

int main() {
    string str1, str2;

    cout << "Enter the first string: ";
    cin >> str1;

    cout << "Enter the second string: ";
    cin >> str2;

    if (areAnagrams(str1, str2)) {
        cout << "The strings are anagrams." << endl;
    } else {
        cout << "The strings are not anagrams." << endl;
    }

    return 0;
}
