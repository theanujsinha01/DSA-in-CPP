
#include <bits/stdc++.h>
using namespace std;

void printSubsequences(string str, string current = "", int index = 0) {
    // Base case: If we've processed the whole string
    if (index == str.size()) {
        cout << current << endl; // Print the current subsequence
        return;
    }

    // Include the current character
    printSubsequences(str, current + str[index], index + 1);
    
    // Exclude the current character
    printSubsequences(str, current, index + 1);
}

int main() {
    string str;
    cout << "Enter a string: ";
    cin >> str;

    cout << "All Subsequences:\n";
    printSubsequences(str); // Call the function to print subsequences

    return 0;
}
