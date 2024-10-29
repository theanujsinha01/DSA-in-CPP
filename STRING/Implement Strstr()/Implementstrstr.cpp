#include <bits/stdc++.h>
using namespace std;

int myStrStr(string& haystack, string& needle) {
    int n = haystack.size();
    int m = needle.size();

    // If needle is empty, return 0
    if (m == 0) return 0;

    // Loop through the haystack
    for (int i = 0; i <= n - m; i++) {
        // Check if substring matches
        if (haystack.substr(i, m) == needle) {
            return i; // Return the starting index of the match
        }
    }

    // If no match, return -1
    return -1;
}

int main() {
    string haystack, needle;
    cout << "Enter the main string: ";
    cin >> haystack;

    cout << "Enter the substring to search: ";
    cin >> needle;

    int result = myStrStr(haystack, needle);

    if (result != -1) {
        cout << "Substring found at index: " << result << endl;
    } else {
        cout << "Substring not found." << endl;
    }

    return 0;
}
