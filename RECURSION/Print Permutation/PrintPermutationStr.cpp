#include <bits/stdc++.h>
using namespace std;

void permute(string str, string ans) {
    // Base case: if the string is empty, print the permutation
    if (str.empty()) {
        cout << ans << endl;
        return;
    }

    // Recursive case: loop through the string and generate permutations
    for (int i = 0; i < str.length(); i++) {
        // Choose the character at index i
        char ch = str[i];
        
        // Make a new string by removing the character at index i
        string remaining = str.substr(0, i) + str.substr(i + 1);
        
        // Call the function recursively with the remaining string and the current permutation
        permute(remaining, ans + ch);
    }
}

int main() {
    string str = "abc";
    permute(str, "");
    return 0;
}
