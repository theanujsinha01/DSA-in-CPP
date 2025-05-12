
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
