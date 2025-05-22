#include <bits/stdc++.h>
using namespace std;

bool isPalindrome (string str) {
  
  int left = 0, right = str.size() - 1;
  bool flag = true; 
  while (left < right) {
    if (str[left] != str[right]) {
        return false; // Not a palindrome
    }
      left++;
      right--;
  }
  return true; // Is a palindrome
}
  
int main() {
    string str = "madam";
    if (isPalindrome(str)) {
        cout << "The string is a palindrome." << endl;
    } else {
        cout << "The string is not a palindrome." << endl;
    }           
    return 0;
}
// time complexity: O(n), where n is the length of the string str.
// space complexity: O(1), as we are using a constant amount of extra space for the left and right pointers.

// --------------------------------------------------
// Pseudo code to check if a string is a palindrome

// Start

// Input string str
// Set left = 0
// Set right = length of str - 1

// While left < right:
//    If str[left] != str[right]:
//        Return false  // Not palindrome
//    Increment left by 1
//    Decrement right by 1

// Return true  // Is palindrome

// End
// --------------------------------------------------
