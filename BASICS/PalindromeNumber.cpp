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
