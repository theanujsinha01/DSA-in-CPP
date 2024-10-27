
#include <bits/stdc++.h>
using namespace std;

void isPalindrome (string str) {
  
     
    int left = 0, right = str.size() - 1;
  
      bool flag = true;
      
    while (left < right) {

        // If any character not match, break the
        // loop, string is not palindrome
        if (str[left] != str[right]) {
            flag = false;
            break;
        }
        left++;
        right--;
    }
      
    if (flag)
        cout << "\"" << str
          << "\" is palindrome." << endl;
          
    else
        cout << "\"" << str
          << "\" is NOT palindrome." << endl;
}
  

int main() {
  
      // Checking if given strings are palindrome
    isPalindrome("ABCDCBA");
    isPalindrome("ABCD");            
    return 0;
}
