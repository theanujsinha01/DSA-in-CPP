#include <iostream>
#include <string>
using namespace std;

bool isPalindrome(string str) {
    // Base case: If the string is empty or has one character
    if (str.length() <= 1)
        return true;

    // If the first and last characters are the same, check the substring
    if (str[0] == str[str.length() - 1])
        return isPalindrome(str.substr(1, str.length() - 2));

    // If the first and last characters are not the same, it's not a palindrome
    return false;
}

int main() {
    string str = "madam";
    if (isPalindrome(str)) {
        cout << str << " is a palindrome!" << endl;
    } else {
        cout << str << " is not a palindrome!" << endl;
    }

    return 0;
}
