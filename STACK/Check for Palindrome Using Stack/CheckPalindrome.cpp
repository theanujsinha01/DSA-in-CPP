#include <bits/stdc++.h>
using namespace std;

bool isPalindrome(string str) {
    stack<char> s; 
    int n = str.length();

    // Push the first half of the string onto the stack
    for (int i = 0; i < n / 2; i++) {
        s.push(str[i]);
    }

    // Find the starting point of the second half
    int start = (n % 2 == 0) ? n / 2 : (n / 2) + 1;

    // Compare the second half of the string with the stack
    for (int i = start; i < n; i++) {
        if (str[i] != s.top()) {
            return false; // If characters don't match, it's not a palindrome
        }
        s.pop();
    }

    return true; 
}

int main() {
    string str = "madam";  

    if (isPalindrome(str)) {
        cout << str << " is a palindrome." << endl;
    } else {
        cout << str << " is not a palindrome." << endl;
    }

    return 0;
}
