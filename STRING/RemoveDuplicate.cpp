#include <bits/stdc++.h>
using namespace std;

string removeDuplicates(string& str) {
    set<char> st(str.begin(), str.end());
    string result = "";
    for (char ch : st) {
        result = result + ch;
    }
    return result;
}

int main() {
    string str = "geeksforgeeks";
    string result = removeDuplicates(str);
    cout << "String after removing duplicates: " << result << endl;
    return 0;
}
// time complexity: O(n)
// space complexity: O(n)

// --------------------------------------------------
// Pseudo code to remove duplicate characters from a string

// Start

// Input string str
// Create a set st and insert all characters of str into st
// Initialize empty string result

// For each character ch in st:
//     Append ch to result

// Return result

// End
// --------------------------------------------------
