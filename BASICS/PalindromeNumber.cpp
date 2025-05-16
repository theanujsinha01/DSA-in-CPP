#include <bits/stdc++.h>
using namespace std;

bool isPalindrome(int num) {
    int originalNum = num;
    int reversedNum = 0,  LastDigit;

    // Reverse the number
    while (num != 0) {
        LastDigit = num % 10;            
        reversedNum = reversedNum * 10 +  LastDigit;  
        num /= 10;                       
    }
    
    // Check if the original number is the same as the reversed number
    return originalNum == reversedNum;
}

int main() {
    int number;
    cout << "Enter a number: ";
    cin >> number;

    if (isPalindrome(number))
        cout << number << " is a palindrome." << endl;
    else
        cout << number << " is not a palindrome." << endl;

    return 0;
}
// time complexity = O(d), where d is the number of digits in the number.
// space complexity = O(1), as we are using a constant amount of space for variables.
// ----------------------------------------------------------------------------------
// pseudo code

// Start

// Input number
// Set originalNum = number
// Set reversedNum = 0

// While number is not 0:
//     LastDigit = number % 10
//     reversedNum = reversedNum * 10 + LastDigit
//     number = number / 10

// If originalNum == reversedNum:
//     Print "Palindrome"
// Else:
//     Print "Not a palindrome"

// End
// ----------------------------------------------------------------------------------