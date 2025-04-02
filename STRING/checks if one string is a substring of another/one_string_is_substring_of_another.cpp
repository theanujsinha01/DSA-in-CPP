#include <bits/stdc++.h>
using namespace std;

bool isSubstring(string str1, string str2) {
    return (str1.find(str2) != string::npos);  // Check if found
}

int main() {
    string str1 = "program";
    string str2 = "gram";
    if (isSubstring(str1, str2)) 
        cout << "Substring found" << endl;
    else 
        cout << "Substring not found" << endl;
    return 0;
}

// Time Complexity: O(n), where n is the length of str1. The find function may need to check each character in str1 once.
// Space Complexity: O(1), as we are not using any additional space that grows with the input size.
